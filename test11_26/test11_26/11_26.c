#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1�������������͵��������ֵ��
//2���Զ������͵��������ֵ�����������Ǹ���double 8��
//3�������ָ������ֵ
//4���Զ������͵���Ч����ֵ


//��ָ������ֵ�൱��Ĭ��ֵΪ8���������������ģ�
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


/*#pragma pack(2)    //����Ҫ���������ֽڶ���,��ѡ��ֵ�н�С�ģ�
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


//�ı�˳��4+4��8�������������Խ����Ϊ4+4+8=16
/*typedef struct Test
{
	char a;      //1+3
	int c;       //4
	double b;    //8    <--����ռ�֮��������������
	

}Test;

void main()
{
	printf("%d\n", sizeof(Test));      //16
}


//1�������������͵��������ֵ��
//2���Զ������͵��������ֵ�����������Ǹ���double 8��
/*typedef struct Test
{
	char a;      //1+7
	double b;    //8    <--����ռ�֮��������������
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