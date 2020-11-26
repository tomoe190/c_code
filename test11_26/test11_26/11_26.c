#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1、基本数据类型的自身对齐值：
//2、自定义类型的自身对齐值：按照最大的那个（double 8）
//3、程序的指定对齐值
//4、自定义类型的有效对齐值


//不指定对齐值相当于默认值为8（所有类型中最大的）
typedef struct Test
{
	short a;            //2+6
	struct              
	{
		int b;         //4+4
		double c;      //8
		char d;        //1+7
	};
	int e;            //4+4
}Test;
void main()
{
	printf("%d\n", sizeof(Test));       //40
}

/*#pragma pack(1)
typedef struct Test
{
	char a;      //1
	int c;       //4
	double b;    //8    

}Test;

void main()
{
	printf("%d\n", sizeof(Test));      //13
}

/* 
typedef struct Test
{
	char a;    //1
	char c;    //1
	char b;    // 1
}Test;

void main()
{
	printf("%d\n", sizeof(Test));   //3
}


/*#pragma pack(2)    //程序要求按照两个字节对齐,（选择值中较小的）
typedef struct Test
{
	char a;      //1+1
	int c;       //4
	double b;    //8    


}Test;

void main()
{
	printf("%d\n", sizeof(Test));     14
}


//改变顺序，4+4是8的整数倍，所以结果变为4+4+8=16
/*typedef struct Test
{
	char a;      //1+3
	int c;       //4
	double b;    //8    <--上面空间之和是它的整数倍
	

}Test;

void main()
{
	printf("%d\n", sizeof(Test));      //16
}


//1、基本数据类型的自身对齐值：
//2、自定义类型的自身对齐值：按照最大的那个（double 8）
/*typedef struct Test
{
	char a;      //1+7
	double b;    //8    <--上面空间之和是它的整数倍
	int c;       //4+8

}Test;

void main()
{
	printf("%d\n", sizeof(Test));   //8+8+8=24
	Test t;
	t.a = 'A';
	t.b = 12.34;
	t.c = 100;

}*/