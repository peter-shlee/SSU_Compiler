int main() {
	int num_count;
	int prime_count;
	int i, j;

	scanf("%d", &num_count);

	prime_count = 0;
	for (i = 0; i < num_count; ++i) {
		int num;
		int prime_flag;
		scanf("%d", &num);

		prime_flag = 1;
		for (j = 2; j <= num / 2; ++j) {
			if (num % j == 0) {
				prime_flag = 0;
				break;
			}
		}

		if (prime_flag && num > 1) {
			++prime_count;
		}
	}

	printf("%d\n", prime_count);

	return 0;
}
