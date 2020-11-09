int func(int a, float b) {
	int r;

	r = a + b;

	return  r;
}

int main() {
	int a, r;
	float b;

	scanf("%d%f", &a, &b);
	r = func(a, b);

	printf("%d\n", r);

	return 0;
}
