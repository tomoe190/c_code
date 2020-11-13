#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int FindMax(int ar[], int n)
{
	int i = 0;
	for (i; i < n; i++)
	{
		if (ar[0] < ar[i])
		{
			int tmp = ar[0];
			ar[0] = ar[i];
			ar[i] = ar[0];
		}
	}
	return ar[0];
}

int FindSecond(int ar[],int n)
{

}

void main()
{
	int ar[] = { -4, -7, -9, -2,-1, -5, -12, -43, -21, -67, -54, -100 };
	int n = sizeof(ar) / sizeof(ar[0]);

	int max_value = FindMax(ar, n);
	printf("max value=%d\n", max_value);
	int second_value = FindSecond(ar, n);
	printf("second value=%d\n", second_value);
}



/*int Find(int ar[], int n, int key)
{
	for (int i = 0; i <= n - 1; ++i)
	{
		if (key == ar[i])
			return i;
	}
	return -1;
}
void main()
{
	int ar[] = { 4, 7, 9, 2, 0, 1, 5, 12, 43, 21, 67, 54, 100 };
	int n = sizeof(ar) / sizeof(ar[0]);

	int key;
	printf("input key:>");
	scanf("%d", &key);
	int index = Find(ar, n, key);
	if (index == -1)
		printf("不存在\n");
	else
		printf("index=%d\n", index);
}








/*void Swap(int *a,int *b)
﻿{
	int tmp = *a;
	﻿*a = *b;
	*b = tmp;
}

void main()
{
	int a = 10;
	int b = 20;
	printf("swap before:a=%d b=%d", a, b);
	Swap(&a, &b);
	﻿﻿﻿printf("swap after:a=%d b=%d", a, b);
}

/*void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void main()
{
	int a = 100;
	int b = 200;
	printf("Swap before a=%d,b=%d\n", a, b);
	Swap(&a, &b);
	printf("Swap after a=%d,b=%d\n", a, b);
}



//形式参数
void Swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;       //交换的是形式参数的值，和主函数的a和b不一样，形参改变不影响实际参数
}*/


//实际参数
/*void main()
{
	int a = 100;
	int b = 200;
	printf("Swap before a=%d,b=%d\n", a, b);
	Swap(a, b);
	printf("Swap before a=%d,b=%d\n", a, b);
}*/