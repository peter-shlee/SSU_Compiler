int a;
void a;
float a;
int a = 10;
void a = 10 * 2;
float a = 'c';
char *str = "hello world";

void a();
int a(int, char, void);
float a(int a, char b, float c);

int main() {
	int a;
	float a;
	char a;
	int a[];
	int a[]()[];
	int a[3]()[44444];
	float a[1 + 2 * 3][2] = {{1, 2, 3}, {4+2}, 1, 1};

	;;;;;;;;;;;;;;;;;;;;;;;;;;

	while(1);
	while(1)
		printf("hello world");
	while(1){
		printf("hello world");
	}
	while(1)
		break;
	while(1)
		continue;

	for(;;);
	for(1;2;3);
	for(i = 1;i < 100;++i);
	for(i = 1;i < 100;++i)
		printf("hello world");
	for(;;)
		continue;
	for(;;)
		break;

	if (1);
	if (1)
		printf("hello world");
	if (1) {
		printf("hello world");
	}

	if (1);
	else;
	if (1)
		printf("if");
	else
		printf("else");
	if (1) {
		printf("hello world");
	} else {
		printf("hello world");
	}

	switch(a) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		default:
			;
	}


	return 0;
}
