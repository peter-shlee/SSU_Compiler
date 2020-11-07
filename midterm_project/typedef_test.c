typedef struct proc{
	int count;
	char *mem;
	int size;
	int ctxt_swtch_cnt;
} PCB;

int main(){
	PCB *pcb = (PCB *)malloc(sizeof(PCB));
	printf("hello world\n");

	return 0;
}
