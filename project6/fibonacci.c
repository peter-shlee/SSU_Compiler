int fibonacci(int n);

int main() {
	int n;

	scanf("%d", &n);
	printf("%d\n", fibonacci(n));

	return 0;
}

int fibonacci(int n) {
	if (n <= 1) return n;

	return fibonacci(n - 1) + fibonacci(n - 2);
}
