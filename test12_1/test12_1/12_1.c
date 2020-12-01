#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
pragma pack(8)
typedef struct Test
{
	char a;    //1 + 3
	int c;     //4
	double b;  //8
}Test;

void main()
{
	printf("size = %d\n", sizeof(Test));
	Test t;
	t.a = 'A';
	t.b = 12.34;
	t.c = 100;
}