#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


#define COL 5
#define ROW 5

void main()
{
	int **ar = (int **)malloc(sizeof(int *)*ROW);
	if (NULL == ar)
		return;

	for (int i = 0; i < ROW; ++i)
	{
		ar[i] = (int*)malloc(sizeof(int)*COL);
	}

	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			ar[i][j] = i + j;
		}
	}

	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < ROW; ++i)
		free(ar[i]);
	free(ar);
}