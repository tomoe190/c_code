#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>



void main()
{
	char *str = "abcxyz";
	printf("str=%s\n", str);
	printf("str=%s\n", str + 3);            //xyz
	printf("str=%s\n", &str[3]);            //xyz
	printf("str=%s\n", &("abcxyz"[3]));     //xyz
	printf("str=%s\n", "abcxyz" + 3);       //xyz
}

/*int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	    
	char **cp[] = { c + 3, c + 2, c + 1, c };

	char ***cpp = cp;

	printf("%s\n", **++cpp);            //POINT
	printf("%s\n", *--*++cpp + 3);      //
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}

/*int main()
{
	char *a[] = { "work", "at", "alibaba" };
	char **pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}

/*int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr1 = (int *)(&aa + 1);
	int *ptr2 = (int *)(*(aa + 1));

	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}

/*void main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &a[4][2] - &a[4][2]);
}

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