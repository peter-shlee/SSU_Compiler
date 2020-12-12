void *mmap(char *, int, int, int, int, int);
int munmap(char *, int);
int PAGESIZE = 4096;
int PROT_READ = 0;
int PROT_WRITE = 1;
char* MAP_PRIVATE = 0;
char* MAP_ANONYMOUS = 1;
char* MAP_FAILED = -1;
int MINALLOC = 8;


typedef struct node { 
	int is_valid; 
	int start_addr;
	int size; 
	struct node *next_node;
	struct node *prev_node;
} Node;

typedef struct mem_list {
	Node *mem_in_use_head;
	Node *mem_not_in_use_head;
} MemLinkedList;

char *mem;
Node *management_mem;
MemLinkedList mem_linked_list;

Node *getNewNode();
void removeNode(Node *node);

int init_alloc() {
	Node *new_node;
	
	mem = mmap(0, PAGESIZE, PROT_READ || PROT_WRITE, MAP_PRIVATE || MAP_ANONYMOUS, -1, 0);
	if (mem == MAP_FAILED) return -1;

	management_mem = mmap(0, PAGESIZE, PROT_READ || PROT_WRITE, MAP_PRIVATE || MAP_ANONYMOUS, -1, 0);
	if (management_mem == MAP_FAILED) return -1;

	new_node = getNewNode();
	new_node->start_addr = 0;
	new_node->size = PAGESIZE;
	new_node->next_node = 0;
	new_node->prev_node = 0;

	mem_linked_list.mem_in_use_head = 0;
	mem_linked_list.mem_not_in_use_head = new_node;

	return 0;
}

int cleanup() {
	Node *node;

	node = mem_linked_list.mem_in_use_head;
	while (node) {
		removeNode(node);
		node = node->next_node;
	}

	node = mem_linked_list.mem_not_in_use_head;
	while (node) {
		removeNode(node);
		node = node->next_node;
	}

	if (!munmap(management_mem, PAGESIZE)) return -1;
	if (!munmap(mem, PAGESIZE)) return -1;

	return 0;
}

char *alloc(int size) {
	Node *new_node;
	Node *new_alloced_mem;
	Node* mem_not_in_use;

	if (size % MINALLOC) {
		return 0;
	}

	mem_not_in_use = mem_linked_list.mem_not_in_use_head;
	while (1) {
		if (!mem_not_in_use) {
			return 0;
		}

		if (mem_not_in_use->size > size) {
			mem_not_in_use->size = mem_not_in_use->size - size;

			new_node = getNewNode();
			new_node->size = size;
			new_node->start_addr = mem_not_in_use->start_addr + mem_not_in_use->size;
			new_node->prev_node = 0;
			new_node->next_node = mem_linked_list.mem_in_use_head;

			if (mem_linked_list.mem_in_use_head) {
				mem_linked_list.mem_in_use_head->prev_node = new_node;
			}
			mem_linked_list.mem_in_use_head = new_node;

			new_alloced_mem = new_node;

			break;
		} else if (mem_not_in_use->size == size) {
			if (mem_not_in_use->prev_node) {
				mem_not_in_use->prev_node->next_node = mem_not_in_use->next_node;
			} else {
				mem_linked_list.mem_not_in_use_head = mem_not_in_use->next_node;
			}

			if (mem_not_in_use->next_node) {
				mem_not_in_use->next_node->prev_node = mem_not_in_use->prev_node;
			}

			mem_not_in_use->prev_node = 0;
			mem_not_in_use->next_node = mem_linked_list.mem_in_use_head;

			if (mem_linked_list.mem_in_use_head) {
				mem_linked_list.mem_in_use_head->prev_node = mem_not_in_use;
			}
			mem_linked_list.mem_in_use_head = mem_not_in_use;

			new_alloced_mem = mem_not_in_use;


			break;
		}

		mem_not_in_use = mem_not_in_use->next_node;
	}


	return mem + new_alloced_mem->start_addr;
}

void dealloc(char *dealloc_ptr) {
	int mem_index = dealloc_ptr - mem;
	Node *node;
	Node *mem_not_in_use;
	Node *tmp_node;
	Node *prev_node = 0;

	if (mem_index < 0 || 4096 <= mem_index) {
		return;
	}


	node = mem_linked_list.mem_in_use_head;
	while (node) {
		if (node->start_addr == mem_index) {
			break;
		}

		node = node->next_node;
	}


	if (!node) return;

	if (node->prev_node) {
		node->prev_node->next_node = node->next_node;
	} else {
		mem_linked_list.mem_in_use_head = node->next_node;
	}

	if (node->next_node) {
		node->next_node->prev_node = node->prev_node;
	}


	mem_not_in_use = mem_linked_list.mem_not_in_use_head;
	if (!mem_not_in_use) {
		node->prev_node = 0;
		node->next_node = 0;
		mem_linked_list.mem_not_in_use_head = node;
	} else {
		while (mem_not_in_use) {
			if (mem_not_in_use->start_addr > node->start_addr) {
				
				node->prev_node = mem_not_in_use->prev_node;
				node->next_node = mem_not_in_use;
				if (node->prev_node) {
					node->prev_node->next_node = node;
				} else {
					mem_linked_list.mem_not_in_use_head = node;	
				}
				mem_not_in_use->prev_node = node;


				if (node->next_node) {
					if (node->start_addr + node->size == node->next_node->start_addr) {
						tmp_node = node->next_node;
						node->size = node->size + node->next_node->size;
						node->next_node = node->next_node->next_node;
						if (node->next_node) {
							node->next_node->prev_node = node;
						}

						removeNode(tmp_node);
					}
				}
				
				
				if (node->prev_node) {
					if (node->prev_node->start_addr + node->prev_node->size == node->start_addr) {
						node->prev_node->next_node = node->next_node;
						if (node->next_node) {
							node->next_node->prev_node = node->prev_node;
						}
						node->prev_node->size = node->prev_node->size + node->size;

						removeNode(node);
					}

				}

				break;
			}

			prev_node = mem_not_in_use;
			mem_not_in_use = mem_not_in_use->next_node;
		}

		if (!mem_not_in_use) {
			prev_node->next_node = node;
			node->prev_node = prev_node;
			node->next_node = 0;

			if (node->prev_node) {
				if (node->prev_node->start_addr + node->prev_node->size == node->start_addr) {
					node->prev_node->next_node = node->next_node;
					node->prev_node->size = node->prev_node->size + node->size;

					removeNode(node);
				}

			}
		}
	}


	return;
}

Node *getNewNode() {
	while (management_mem->is_valid) {
		management_mem = management_mem + 1;
	}
	management_mem->is_valid = 1; 

	return management_mem;
}

void removeNode(Node *node) {
	node->is_valid = 0;
}

void printAllNode() {
	Node *node;
	printf("\n******************print all nodes*******************\n");
	printf("mem in use:\n");
	node = mem_linked_list.mem_in_use_head;
	while(node) {
		printf("index: %d, size: %d\n", node->start_addr, node->size);

		node = node->next_node;
	}

	printf("mem not in use:\n");
	node = mem_linked_list.mem_not_in_use_head;
	while(node) {
		printf("index: %d, size: %d\n", node->start_addr, node->size);

		node = node->next_node;
	}
	printf("******************print all nodes end****************\n\n");

	return;
}
