void *fun(void *, int *, int);
int fun1(int, int, char);
void fun2(float);

int main() {
	int a, b;
	char ch;
	float f;

	fun(&ch, &a, b);
	fun1(a, b, ch);
	fun2(f);

	return 0;
}
