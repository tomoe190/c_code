#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int n;
	printf("input n:>");
	scanf("%d", &n);

	//¶¯Ì¬ÄÚ´æ¿ª±Ù
	int *ar = (int *)malloc(sizeof(int)* n);  //n  int
	if (NULL == ar)
	{
		printf("Out Of Memory.\n");
		return;
	}

	for (int i = 0; i<n; ++i)
	{
		ar[i] = i + 1;
	}

	for (int i = 0; i<n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");

	free(ar);
}