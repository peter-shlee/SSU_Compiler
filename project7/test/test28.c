int system(char *);

void swap(int*,int);
int main()
{
	int i;
	int ary[5];
	int size;
	ary[0] = 1;
	ary[1] = 2;
	ary[2] = 3;
	ary[3] = 4;
	ary[4] = 5;
	size = sizeof(ary) / sizeof(ary[0]);

	printf("처음 배열에 저장된 값 : ");
	for (i = 0; i < size; ++i)
	{
		printf("%d", ary[i]);
	}
	printf("\n");
	swap(ary, size);
	printf("바뀐 배열에 저장된 값 : ");
	for (i = 0; i < size; ++i)
	{
		printf("%d", ary[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
void swap(int *aryR,int size)
{
	int x,i;
	i = (size-- / 2)-1 ;
	for (; i >= 0; --i)
	{
		x = aryR[i]; aryR[i] = aryR[size - i]; aryR[size - i] = x;
	}
}
