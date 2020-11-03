#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int a = 0;
	int v = (a++) + (a++) + (++a);
	
	printf("a=%d\n", a);
	printf("v=%d\n", v);
}