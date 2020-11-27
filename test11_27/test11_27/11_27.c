#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1、基本数据类型的自身对齐值
//2、自定义类型的自身对齐值
//3、程序的指定对齐值
//4、自定义类型的有效对齐值 



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