#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>

//写一个函数打印arr数组的内容，不使用数组下标，使用指针
/*int main()
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", *arr + i);
	}
	return 0;
}


//
/*int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);   //2+3  (4+3)+5
	printf("ret=%d\n", ret);           //平台不同不一样
	return 0;
}


//
/*int i;            //全局变量不初始化，默认为0（局部变量不初始化默认为随机值）
int main()
{
	i--;           //-1
	if (i > sizeof(i))  //sizeof返回的值是一个无符号数据
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}


//交换两个变量不创建临时变量
/*int main()
{
	int a = 10;
	int b = 20;
	printf("%d %d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d %d\n", a, b);

	return 0;
}


//打印整数二进制的奇数位和偶数位
/*int main()
{
	int a = 45676;
	for (int i = 31; i > 0; i -= 2)
	{
		printf("%d ", a >> i & 1);
	}
	printf("\n");
	for (int i = 30; i >=0; i -= 2)
	{
		printf("%d ", a >> i & 1);
	}
	printf("\n");
	return 0;
}*/