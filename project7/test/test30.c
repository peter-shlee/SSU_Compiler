int system(char *);
int getchar();
int sscanf(char *, char *, ...);

void inputDataCnt(int*, int*);
void inputIntArray(char*);
void transfer(char *temp, char *temp2, int dataCnt, int *num);
void count(int *num, int dataCnt,int*countNum);
void output(int);
int main()
{
	int countNum,i,l,quit, dataCnt, num[1000];
	char temp[6000], temp2[6];

	i=0;
	quit = 0;

	while (1)
	{
		countNum = 0;
		for (l = 0; l < 1000; ++l)
		{
			num[l] = 0;
		}
		while (1)
		{
			inputDataCnt(&dataCnt, &quit);
			if (quit == 1)break;
			if (dataCnt>= 2 && dataCnt <= 1000)break;
		}
		if (quit == 1)break;
		inputIntArray(temp);
		transfer(temp, temp2, dataCnt, num);
		count(num, dataCnt,&countNum);
		output(countNum);
	}
	system("pause");
	return 0;
}
void inputDataCnt(int* dataCnt, int *quit)
{
	while (1)
	{
		printf(" 입력할 숫자의 개수 : ");
		scanf("%d", dataCnt);
		if (getchar() == 'n')break;
		else
		{
			*quit = 1;
			break;
		}
	}
}
void inputIntArray(char* temp)
{
	int i = 0;
	printf(" 숫자 입력 : ");
	while (1)
	{
		temp[i] = getchar();
		if (temp[i] == 'n')
		{
			temp[i] = 0;
			break;
		}
		++i;
	}
}
void transfer(char *temp, char *temp2, int dataCnt, int *num)
{
	char tresh[20];
	int m, n, o,i, j, k,intLen, treshCnt, x, l;
	for (i = 0; i < dataCnt; ++i)
	{
		m = 0;
		n = 0;
		treshCnt = 0;
		intLen = 0;
		for (l = 0; l < 6; ++l)
		{
			temp2[l] = 0;
		}
		sscanf(temp, "%[0-9]%[^0-9]", temp2, tresh);
		while (1)
		{
			if (temp2[m++] != 0)
			{
				++intLen;
			}
			else
				break;
		}
		while (1)
		{
			if (tresh[n++] != 0)
			{
				++treshCnt;
			}
			else
				break;
		}
		for (o = intLen + treshCnt; o<100; ++o)
		{
			temp[o - (intLen + treshCnt)] = temp[o];
			temp[o] = 0;
		}
		for (j = 0; j < intLen / 2; ++j)
		{
			tresh[0] = temp2[j];
			temp2[j] = temp2[intLen - j - 1];
			temp2[intLen - j - 1] = tresh[0];
		}
		for (x = 1; k < intLen; ++k)
		{
			num[i] = num[i] + (temp2[k] - 48) * x;
			x = (x + x + x + x + x + x + x + x + x + x);
		}
	}
}
void count(int *num, int dataCnt,int *countNum)
{
	int c, i, j, k, m=0;
	for (c = 0; c < 100; ++c)
	{
		for (i = 0; i < dataCnt; ++i)
		{
			for (j = i + 1; j < dataCnt; ++j)
			{
				if (num[i] == num[j])
				{
					for (k = j; k <= dataCnt; ++k)
					{
						num[k] = num[k + 1];
					}
					--dataCnt;
					num[dataCnt] = 0;
				}
			}
		}
	}
	while (1)
	{
		if (num[m++] != 0)
		{
			++*countNum;
		}
		else
			break;
	}
}
void output(int countNum)
{
	printf("  서로 다른 수의 개수 : %d\n\n", countNum);
}
