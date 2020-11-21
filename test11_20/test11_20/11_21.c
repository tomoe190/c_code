#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void init(int arr[][3], int x, int y)
{
	for (int i; i < x; i++)
	{
		for (int j; j < y; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
void face()
{

}
int main()
{
	char arr[3][3];
	init(arr, 3, 3);
}


