struct S {
	int d;
	float f;
};

int main() {
	int a = 2;
	int b = 3;
	struct S s = {1, 1.23};
	struct S *sp;
	int *p = &a;

	++a;
	--a;
	a++;
	a--;

	&a;
	*p;

	+a;
	-a;

	sizeof a;
	sizeof(a);
	(float)a;
	!a;

	a + b;
	a - b;
	a * b;
	a / b;
	a % b;

	a > b;
	a < b;
	a >= b;
	a <= b;
	a == b;
	a != b;

	s.d;
	s.f;
	sp = &s;
	sp->d;
	sp->f;

	return 0;
}
