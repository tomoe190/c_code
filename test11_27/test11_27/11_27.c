#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1�������������͵��������ֵ
//2���Զ������͵��������ֵ
//3�������ָ������ֵ
//4���Զ������͵���Ч����ֵ 



typedef struct Test
{
	short a;               //2+6
	struct
	{
		double c;          //8
		int b;             //4
		char d;            //1+3
	};
	int e;                 //4+4
}Test;
void main()
{
	printf("%d\n", sizeof(Test));         //32
}

/*#pragma  pack(2)
typedef struct Test
{
	short a;               //2
	struct
	{
		int b;             //4
		double c    ;      //8
		char d;            //1+1
	};
	int e;                 //4
}Test;
void main()
{
	printf("%d\n", sizeof(Test));         //20
}

/*typedef struct Test
{
	short a;               //2+6
	struct
	{
		int b;             //4+4
		double c[10];      //80
		char d;            //1+7
	};
	int e;                 //4+4
}Test;
void main()
{
	printf("%d\n", sizeof(Test));           //112
}*/