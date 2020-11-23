int MAX_SIZE = 10;
int MIN_SIZE = 2;
int NUM_OF_MENU = 3;
int srand();
int rand();
int free();
int time();
int NULL = 0;
int getch();
int getchar();
int calloc();
int system();

enum
{
	PRACTICE = 1,
	MATCH,
	EXIT
};

int GetInt(char *msg, int min, int max);
int *SetRandArray(int size);
int *MakeBingoBoard(int size);
void DeleteBingoBoard(int *bingoBoard);
int DeleteNumber(int *bingoBoard, int size, int selectedNum);
int IsGameEnd(int *bingoBoard, int size);
void Practice();
void Match();
void PrintBingoBoardForPractice( int *board, int size);
void PrintBingoBoardForMatch( int *board1,  int *board2, int size);
void PrintMenu( char **menu);
void SwapInt(int *a, int *b);
void myFlush();

int main()
{
	int exitFlag = 0;
	char *menu[NUM_OF_MENU] = {"연습 게임", "대전게임", "종료"};
	srand(time(NULL));

	while (exitFlag == 0)
	{
		PrintMenu(menu);
		switch (GetInt("# 메뉴 선택 : ", 1, NUM_OF_MENU))
		{
			case PRACTICE:
				Practice();
				break;
			case MATCH:
				Match();
				break;
			case EXIT:
				exitFlag = 1;
		}
	}

	return 0;
}

int GetInt( char *msg, int min, int max)
{
	int inputInt = 0;

	while (1)
	{
		printf("%s", msg);
		if (scanf("%d", &inputInt) != 1)
		{
			myFlush();
		}
		else if (inputInt < min || inputInt > max)
		{
			;
		}
		else
		{
			break;
		}
		printf("* %d~%d 사이의 숫자를 입력하세요.\n", min, max);
	}

	return inputInt;
}

void Practice()
{
	int size = 0;
	int selectedNum = 0;
	int *playerBoard = NULL;

	printf("\n# 연습용 빙고 게임을 시작합니다.\n\n");
	size = GetInt("# 빙고판의 가로,세로 크기를 입력해주세요 : ", MIN_SIZE, MAX_SIZE);
	playerBoard = MakeBingoBoard(size);
	if (playerBoard == NULL)
	{
		return;
	}

	while (!IsGameEnd(playerBoard, size))
	{
		PrintBingoBoardForPractice(playerBoard, size);
		while (1)
		{
			selectedNum = GetInt("# 지울 숫자 입력 : ", 1, size * size);
			if (DeleteNumber(playerBoard, size, selectedNum) == 1)
			{
				break;
			}
			else
			{
				printf("* 이미 지워진 숫자입니다. 다시 입력하세요.\n");
				continue;
			}
		}
	}

	printf("\n연습게임 종료. 아무키나 입력하면 메뉴로 돌아갑니다.\n\n");
	getch();

	DeleteBingoBoard(playerBoard);
}

void Match()
{
	int size = 0;
	int comSelectCnt = 0;
	int selectedNum = 0;
	int endFlag = 0;
	int *computerBoard = NULL;
	int *playerBoard = NULL;
	int *selectedNumByComputer = NULL;

	printf("\n# 사용자 VS 컴퓨터 대전 빙고 게임을 시작합니다.\n\n");
	size = GetInt("# 빙고판의 가로,세로 크기를 입력해주세요 : ", MIN_SIZE, MAX_SIZE);

	playerBoard = MakeBingoBoard(size);
	if (playerBoard == NULL)
	{
		return;
	}

	computerBoard = MakeBingoBoard(size);
	if (computerBoard == NULL)
	{
		DeleteBingoBoard(playerBoard);
		return;
	}

	selectedNumByComputer = SetRandArray(size);
	if (selectedNumByComputer == NULL)
	{
		DeleteBingoBoard(playerBoard);
		DeleteBingoBoard(computerBoard);
		return;
	}

	while (!endFlag)
	{
		PrintBingoBoardForMatch(playerBoard, computerBoard, size);
		while (1)
		{
			selectedNum = GetInt("# 지울 숫자 입력 : ", 1, size * size);
			if (DeleteNumber(playerBoard, size, selectedNum) == 1)
			{
				DeleteNumber(computerBoard, size, selectedNum);
				break;
			}
			else
			{
				printf("* 이미 지워진 숫자입니다. 다시 입력하세요.\n");
				continue;
			}
		}

		if (endFlag = IsGameEnd(playerBoard, size) || IsGameEnd(computerBoard, size) == 1)
		{
			break;
		}

		PrintBingoBoardForMatch(playerBoard, computerBoard, size);
		while (1)
		{
			if (DeleteNumber(computerBoard, size, selectedNumByComputer[comSelectCnt++]) == 1)
			{
				DeleteNumber(playerBoard, size, selectedNumByComputer[comSelectCnt - 1]);
				printf("# 컴퓨터가 선택한 숫자는 (%d)입니다.\n", selectedNumByComputer[comSelectCnt - 1]);
				break;
			}
			else
			{
				continue;
			}
		}
		printf("계속하려면 아무 키나 입력하세요.\n\n");
		getch();
		endFlag = IsGameEnd(playerBoard, size) || IsGameEnd(computerBoard, size);
	}

	PrintBingoBoardForMatch(playerBoard, computerBoard, size);
	if (IsGameEnd(playerBoard, size) && IsGameEnd(computerBoard, size))
	{
		printf("\n# 무승부!.");
	}
	else if (IsGameEnd(playerBoard, size))
	{
		printf("\n# 사용자 승!.");
	}
	else
	{
		printf("\n# 컴퓨터 승!.");
	}
	printf(" 아무키나 입력하면 메뉴로 돌아갑니다.\n\n");
	getch();

	DeleteBingoBoard(playerBoard);
	DeleteBingoBoard(computerBoard);
	DeleteBingoBoard(selectedNumByComputer);
	return;
}

int *SetRandArray(int size)
{
	int i = 0;
	int a = 0, b = 0;

	int *tmpRandArray = (int *)calloc(size * size, sizeof(int));
	if (tmpRandArray == NULL)
	{
		printf("* 랜덤 배열 생성 실패.\n");
		return tmpRandArray;
	}

	for (i = 0; i < size * size; ++i)
	{
		tmpRandArray[i] = i + 1;
	}

	for (i = 0; i < size * size; ++i)
	{
		a = rand() % (size * size);
		b = rand() % (size * size);
		SwapInt(tmpRandArray + a, tmpRandArray + b);
	}

	return tmpRandArray;
}

int *MakeBingoBoard(int size)
{
	int *newBingoBoard = SetRandArray(size);
	if (newBingoBoard == NULL) {
		printf("* 빙고판 생성 실패.\n");
		return NULL;
	}

	return newBingoBoard;
}

void DeleteBingoBoard(int *bingoBoard)
{
	if (bingoBoard == NULL)
	{
		return;
	}
	free(bingoBoard);

	return;
}

int DeleteNumber(int *bingoBoard, int size, int selectedNum)
{
	int i = 0;

	if (bingoBoard == NULL) {
		return 0;
	}

	for (i = 0; i < size * size; ++i)
	{
		if (bingoBoard[i] == selectedNum)
		{
			bingoBoard[i] = 0;
			return 1;
		}
	}

	return 0;
}

int IsGameEnd( int *bingoBoard, int size)
{
	int i = 0, j = 0;
	int emptyLineCnt = 0;
	int emptyRoomCnt = 0;

	if (bingoBoard == NULL) {
		return 1;
	}

	for (i = 0; i < size; ++i)
	{
		emptyRoomCnt = 0;
		for (j = 0; j < size; ++j)
		{
			if (*(bingoBoard + i * size + j) == 0)
			{
				++emptyRoomCnt;
			}
		}
		if (emptyRoomCnt == size)
		{
			++emptyLineCnt;
		}
	}

	for (i = 0; i < size; ++i)
	{
		emptyRoomCnt = 0;
		for (j = 0; j < size; ++j)
		{
			if (*(bingoBoard + i + j * size) == 0)
			{
				++emptyRoomCnt;
			}
		}
		if (emptyRoomCnt == size)
		{
			++emptyLineCnt;
		}
	}

	emptyRoomCnt = 0;
	for (i = 0; i < size; ++i)
	{
		if (*(bingoBoard + i + i * size) == 0)
		{
			++emptyRoomCnt;
		}
	}
	if (emptyRoomCnt == size)
	{
		++emptyLineCnt;
	}
	emptyRoomCnt = 0;
	for (i = 0; i < size; ++i)
	{
		if (*(bingoBoard + (i + 1) * (size - 1)) == 0)
		{
			++emptyRoomCnt;
		}
	}
	if (emptyRoomCnt == size)
	{
		++emptyLineCnt;
	}

	if (emptyLineCnt >= size)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void PrintBingoBoardForPractice( int *board, int size)
{
	int curValue = 0;
	int i = 0, j = 0;

	if (board == NULL) {
		return;
	}

	system("cls");
	for (i = 0; i < size; ++i)
	{
		printf("|");
		for (j = 0; j < size; ++j)
		{
			curValue = *(board + (i * size + j));
			if (curValue == 0)
			{
				printf("%5c", 'X');
			}
			else
			{
				printf("%5d", curValue);
			}
		}
		printf("%5c\n", '|');
	}

	return;
}

void PrintBingoBoardForMatch( int *board1,  int *board2, int size)
{
	int curValue = 0;
	int i = 0, j1 = 0, j2 = 0;

	if (board1 == NULL || board2 == NULL) {
		return;
	}

	system("cls");
	printf("[USER]");
	for (i = 0; i < (size)*5; ++i)
	{
		printf(" ");
	}
	printf("[COMPUTER]\n");

	for (i = 0; i < size; ++i)
	{
		printf("|");
		for (j1 = 0; j1 < size; ++j1)
		{
			curValue = *(board1 + (i * size + j1));
			if (curValue == 0)
			{
				printf("%5c", 'X');
			}
			else
			{
				printf("%5d", curValue);
			}
		}
		printf("%5c", '|');

		printf("|");
		for (j2 = 0; j2 < size; ++j2)
		{
			curValue = *(board2 + (i * size + j2));
			if (curValue == 0)
			{
				printf("%5c", 'X');
			}
			else
			{
				printf("%5c", '?');
			}
		}
		printf("%5c\n", '|');
	}

	return;
}

void PrintMenu( char **menu)
{
	int i = 0;

	if (menu == NULL) {
		return;
	}

	system("cls");
	for (i = 0; i < NUM_OF_MENU; ++i)
	{
		printf("%d. %s\n", i + 1, menu[i]);
	}

	return;
}

void SwapInt(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

	return;
}

void myFlush()
{
	return;
}
