int system();
int getchar();

int input(int*);
int main()
{
	int a = 1, b = 1, c = 1;
	int A = 500, B = 700, C = 400;
	int aMax, bMax, cMax;
	int money;
	int quit = 0;
	while (1)
	{
		money = input(&quit);
		aMax = money / 500;
		bMax = money / 700;
		cMax = money / 400;
		a = 1;
		b = 1;
		c = 1;
		if (quit == 1)break;
		while (a <= aMax)
		{
			while (b <= bMax)
			{
				while (c <= cMax)
				{
					if (money == (a*A + b*B + c*C))
					{
						printf("크림빵(%d 개), 새우깡(%d 봉지), 콜라(%d 병)\n", a, b, c);
					}
					++c;
				}
				c = 1;
				++b;
			}
			c = 1;
			b = 1;
			++a;
		}
		printf("어떻게 구입하시겠습니까?\n\n");
	}
	system("pause");
	return 0;
}
int input(int* quit)
{
	int money;
	while (1)
	{
		printf("현재 당신의 소유 금액 입력 : ");
		scanf("%d", &money);
		if (getchar() == "\n")
		{
			if (money >= 0)break;
			else
				printf("다시 입력하세요.\n");
		}
		else
		{
			while (getchar() != "\n");
			*quit = 1;
			break;
		}
	}
	return money;
}
