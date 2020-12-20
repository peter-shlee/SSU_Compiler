void main() {
	int *nums;
	int num_count;
	int i;

	num_count = 10;

	nums = malloc(sizeof(int) * num_count);

	for (i = 0; i < num_count; ++i) {
		nums[i] = i;
	}

	for (i = 0; i < num_count; ++i) {
		printf("nums[%d] : %d\n", i + 1, *(nums + i));
	}
}
