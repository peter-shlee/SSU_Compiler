int a(int, char);

int main() {
	int d;
	char ch;
	int (*fp)(int, char);
	fp = a;
	fp(d, ch);
	a(d, ch);

	return 0;
}

int a(int d, char c) {
	return 0;
}
