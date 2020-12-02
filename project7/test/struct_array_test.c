typedef struct node {
	int a;
	char c;
	float f;
} Node;

int main() {
	int i;
	Node nodes[100];

	for (i = 0; i < 100; ++i) {
		nodes[i].a = i;
	}

	return 0;
}
