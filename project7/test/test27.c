int system(char *);
int getchar();
int strcpy(char *, char *);

void inputInt(int*,int*);
char inputCr(int*,int*);
void output(int,int*,int*,int*,int*,char);
int main()
{
	int sum=0,max, min,i,max2,min2;
	char cr;
	inputInt(&min, &max);
	cr = inputCr(&min, &max);
	if (cr == 'e')
	{
		if (min % 2 == 1)
			min2 = min + 1;
		else
			min2 = min;
		if (max % 2 == 1)
			max2 = max - 1;
		else
			max2 = max;
		for (i = min2; i <= max;i = i + 2)
		{
			sum = sum + i;
		}
		output(sum,&min,&max,&min2,&max2,cr);
	}
	else
	{
		if (min % 2 == 0)
			min2 = min + 1;
		else
			min2 = min;
		if (max % 2 == 0)
			max2 = max - 1;
		else
			max2 = max;
		for (i = min2; i <= max; i = i + 2)
		{
			sum = sum + i;
		}
		output(sum, &min, &max, &min2, &max2,cr);
	}
	system("pause");
	return 0;
}
void inputInt(int* min, int* max)
{
	while (1)
	{
		printf("시작값을 입력하세요 : ");
		scanf("%d", min);
		if (getchar() == 'n')
		{
			if (*min > 0)break;
			else
				printf("양수를 입력해주세요.\n\n");
		}
		else
		{
			while (getchar() != 'n');
			printf("정수를 입력해 주세요.\n\n");
		}
	}
	while (1)
	{
		printf("끝 값을 입력하세요 : ");
		scanf("%d", max);
		if (getchar() == 'n')
		{
			if (*max > *min)break;
			else
				printf("시작값보다 큰 값을 입력해주세요.\n");
		}
		else
		{
			while (getchar() != 'n');
			printf("정수를 입력해 주세요.\n");
		}
	}
}
char inputCr(int *min,int *max)
{
	char inputData;
	while (1)
	{
		printf("*%d~%d 까지의 짝수의 합을 구할까요? 홀수의 합을 구할까요?(짝수:e/홀수:o) : ", *min, *max);
		scanf("%c", &inputData);
		if (inputData == 'e' || inputData == 'o')break;
		else
		{
			while (getchar() != 'n');
			printf("e와o 둘 중 하나를 입력해주세요.\n\n");
		}
	}
	return inputData;
}
void output(int sum, int *min, int *max,int *min2, int *max2,char cr)
{
	char x[10];
	int a;
	a = *min2;
	if (cr == 'e')
	{
		strcpy(x, "짝수");
	}
	else
	{
		strcpy(x, "홀수");
	}
	printf("%d~%d 까지의 %s(", *min, *max, x);
	for (; a <= *max2; a = a + 2)
	{
		printf("%d ",a);
	}
	printf("\b)의 합은 %d 입니다.\n", sum);
}
