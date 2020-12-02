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
