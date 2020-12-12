typedef int FILE;
int system(char *);
int NULL = 0;
int fscanf(FILE *, char *, ...);
FILE *fopen(char *, char *);
int SWAP(int *, int *);

FILE *fileOpen(char *filename, char *mode);
int fileRead(FILE *fp, int *dataArray);
void sort(int dataCnt, int*dataArray);
void outputArray(int , int *);
int main()
{
	int i, testCnt, dataCnt, dataArray[100];
	FILE *fp;
	fp = fileOpen("D:\\data\\hw56_sortData.txt", "rt");
	if (fp == 0)return 1;
	fscanf(fp, "%d", &testCnt);
	for (i = 0; i < testCnt; i++)
	{
		dataCnt = fileRead(fp, dataArray);
		printf("# 소트 전 데이터 : ");
		outputArray(dataCnt, dataArray);
		sort(dataCnt, dataArray);
		printf("# 소트 후 데이터 : ");
		outputArray(dataCnt, dataArray);
		printf("\n");
	}
	system("pause");
	return 0;
}
FILE * fileOpen(char *filename, char *mode)
{
	FILE *fp;
	if ((fp = fopen(filename, mode)) == 0)
	{
		printf("File open error!\n");
	}
	return fp;
}
int fileRead(FILE *fp, int *dataArray)
{
	int dataCnt = 0;
	while (1)
	{
		fscanf(fp, "%d", &dataArray[dataCnt]);
		if (dataArray[dataCnt] == 0)break;
		dataCnt++;
	}
	return dataCnt;
}
void sort(int dataCnt, int*dataArray)
{
	int i,j;
	for (i = 0; i < dataCnt-1;++i)
	{
		for (j = i+1; j < dataCnt; ++j)
		{
			if (dataArray[i] > dataArray[j])
				SWAP(dataArray[i],dataArray[j]);
		}
	}
}
void outputArray(int dataCnt, int *array)
{
	int i;
	for (i = 0; i < dataCnt; ++i)
		printf("%4d", array[i]);
	printf("\n");
}
