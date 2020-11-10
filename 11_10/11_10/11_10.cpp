#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


/*void main()
{
	int a = 10;
	int *p = &a;
	//int *p = &10;错误，不能&加常量
}

/*void main()
{
	int *pi = (int *)0x0012ff7c;  //强制转换
	printf("%d\n", *pi);
}

/*void main()
{
	int a = 10;
	int *p = &a;
	int *q = p;
}

/*void main()
{
	int a = 123456;
	char *pc = (char*)&a;
	printf("pc=0x%p %p\n", pc, pc+1);

	short *ps = (short*)&a;
	printf("ps=0x%p %p\n", ps, ps + 1);

	int *pi = &a;
	printf("pi=0x%p %p\n", pi, pi + 1);
}

/*void main()
{
	int a = 10;
	char *pc = (char*)&a;
	printf("pc=0x%p value=%d\n", pc, *pc);

	short *ps = (short*)&a;
	printf("ps=0x%p value=%d\n", ps, *ps);

	int *pi = &a;
	printf("pi=0x%p value=%d\n", pi, *pi);
}


/*void main()
{
	int a =10 ;
	int *p=&a;    //整形指针变量
	printf("a=%d\n", a);
	printf("a=%d\n", *p);
}


/*void main()
{
	int i = 0;
	int v = (i++) + (++i);    //两种结果1或2
	printf("v=%d\n", v);
}

/*void main()
{
	int i = 0;
	int v = (++i) + (i++);
	printf("v=%d\n", v);
}


/*int main()
{
	int a = 0;
	double d = 12.34;
	a = d;
	return 0;
}*/