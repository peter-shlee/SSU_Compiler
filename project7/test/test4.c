int a;
float c;
int d;
float f; 
char *str;
char *str2;

void f1();
int f2(int, char);
float f3(int a, char b, float c);

int main() {
	float b;
	char c;
	float g[1 + 2 * 3][2];
	int i;

	i = 0;
	d = 10;
	f = 3.5;
	str = "hello world";
	str2 = "ABCDEFG";
	;;;;

	while(1){
		printf("12345");
	}
	while(1)
		continue;

	for(1;1;1);
	for(i = 1;i < 100;++i)
		printf("hello world");
	for(1;1;1)
		break;

	if (1);
	if (1) {
		printf("hello world");
	}

	if (1)
		printf("if");
	else
		printf("else");

	if (0) {
		printf("if");
	} else if (2) {
		printf("else if");
	} else {
		printf("else");
	}

	switch(a) {
		case 1:
			break;
		case 2:
			break;
		default:
			;
	}

	return 0;
}
