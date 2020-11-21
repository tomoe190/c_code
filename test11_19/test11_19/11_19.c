#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void BubbleSort(int ar[], size_t size)
{
	int isChange = 0;
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j=0; j < size-i - 1; j++)
		{
			if (ar[j]>ar[j-1])
			{
				int tmp=ar[j];
				ar[j] = ar[j-1];
				ar[j-1] = tmp;
				isChange = 1;
			}
		}
		if (!isChange)
			return;
	}
}
int main()
{
	int ar[10] = { 12, 4, 5, 1, 6, 7, 84, 45, 21 };
	printf("%d ", ar[10], 10);
	return 0;
}


//递归和非递归分别实现求第n个斐波那契数
//递归
/*int fibonacci(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
	printf("%d\n",fibonacci(7));
	return 0;
}*/
//非递归
/*int fibonacci(int n)
{
	int fac[1024] = { 0,1,1};
	for (int i = 3; i <= n; i++)
	{
		fac[i] = fac[i - 1] + fac[i - 2];
	}
	return fac[n];
}
int main()
{
	int n = 0;
	printf("请输入n：");
	scanf("%d",&n);
	printf("%d\n", fibonacci(n));
	return 0;
}*/


//编写一个函数实现n的k次方，使用递归实现
/*int mypow(int n,int k)
{
	if (k == 0)
	{
		return 1;
	}
	if (k == 1)
	{
		return n;
	}
	return n *mypow(n,k - 1);
}
int main()
{
	printf("%d\n", mypow(2,6));

	return 0;
}*/



//写一个递归函数DigitSum(n),输入一个非负整数，返回组成它的数字之和
/*int DigitSum(int n)
{
	int num = n % 10;
	if (n < 10)
	{
		return num;
	}
	return num + DigitSum(n / 10);
}
int main()
{
	printf("%d\n", DigitSum(6789));
	return 0;
}*/




//编写一个函数reverse_string(char *string)(递归实现）
//非递归
/*char *reverse_string(char *string)
{
	char *start = string;
	char *end = string + strlen(string) - 1;
	for (; start < end; start++, end--)
	{
		char ch = *start;
		*start = *end;
		*end = ch;
	}
	return string;
}
int main()
{
	char buf[] = "nihao";
	printf("%s\n", reverse_string(buf));
	return 0;
}
//递归
/*char *reverse_string(char *string)
{
	if (strlen(string)<2)
	{
		return string;
	}
	int len = strlen(string) - 1;
	char ch = *string;             //保存首字符
	*string = *(string + len);//将末尾字符赋值给首字节空间
	*(string + strlen(string) - 1) = '\0';
	reverse_string(string + 1);

	*(string + len) = ch;

	return string;
}
int main()
{
	char buf[] = "nihao";
	printf("%s\n", reverse_string(buf));
	return 0;
}*/
/*char *reverse_string(char *string)
{	if (strlen(string) <2)
	{
		return string;
	}
	int len = strlen(string) - 1;      //字符长度会变，要固定一个长度
	char ch = *string;  //保存首字符
	*string = *(string + strlen(string) - 1);    //将末尾字符赋值给首字节空间
	*(string + strlen(string) - 1) = '\0';
	reverse_string(string + 1);

	*(string + len) = ch;
	return string;
}
int main()
{
	char buf[] = "nihao";
	printf("%s\n", reverse_string(buf));
	return 0;
}*/


//递归和非递归分别实现strlen——求字符串的长度（起始位置到\0处）
//非递归
/*int mystrlen(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;                   //往后走一个所指元素
		count++;
	}
	return count;
}
int main()
{
	printf("%d\n",mystrlen("nihao"));
	return 0;
}
//递归
int mystrlen(char *str)
{
	if (*str == '\0')
	{
		return 0;
	}
	return 1 + mystrlen(str + 1);
}*/
/*int mystrlen(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
int main()
{
	printf("%d ", mystrlen("nihao"));
	return 0;
}*/


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//非递归
/*int factorial(int n)
{
	int fac = 1;
	for (int i = 1; i <= n; i++)
	{
		fac *= i;
	}
	return fac;
}*/
/*int main()
{
	printf("%d\n", factorial(5));
}
//递归
int factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n*factorial(n - 1);
}*/




/*int factorial(int n)
{
	int fac = 1;
	for (int i = 1; i <= n; i++)
	{
		fac *= i;
	}
	return fac;
}
int main()
{
	printf("%d ", factorial(4));
	return 0;
}*/


//递归方式实现打印一个整数的每一位
//每次打印数字的个位数，打印之后，除以10，然后下次除后的数字的个位数
/*void print(int num)
{
	printf("%d ", num % 10);
	if (num < 10)
	{
		return;                //退出这个函数
	}
	print(num / 10);
}
int main()
{
	print(6789);
	return 0;
}*/
//打印出是：9876
/*void print(int num)
{
	if (num < 10)
	{
		printf("%d ", num % 10);
		return;
	}
	print(num / 10);
	printf("%d ", num % 10);
}
int main()
{
	print(6789);
	return 0;
}*/
//打印出是：6789

/*void print(int num)
{
	if (num < 10)
	{
		printf("%d ", num % 10);
		return;
	}
	print(num / 10);
	printf("%d ", num % 10);
}*/

/*void print(int num)
{
	if (num < 10)
	{
		printf("%d ", num%10);
		return;
	}
	print(num / 10);
	printf("%d ", num % 10);
}
int main()
{
	print(12345);
	return 0;
}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己决定
/*void multiplication_table(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%d \t", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	multiplication_table(10);
	return 0;
}*/

/*void multiplication_table(int n)
{
	for (int i; i <= n; i++)
	{
		for (int j; j <= i; j++)
		{
			printf("%d*%d=%d\t", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	multiplication_table(12);
	return 0;
}



//交换两个数
/*void myswap(int *num1, int *num2)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
int main()
{
	int a = 30;
	int b = 50;
	printf("swap before:%d %d \n", a, b);
	myswap(&a, &b);
	printf("swap after:%d %d \n", a, b);
	return 0;
}

//输出1000~2000间的闰年                        有问题
/*int is_leap_year(int year)
{
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int i = 0;
	for (int i = 1000; i <= 2000; i++)
	{
		if (is_leap_year == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}


//实现一个函数，判断一个数是不是素数(函数封装）        有问题
/*int is_prime(int num)
{
	int i=0;
	for ( i= 2; i <= num; i++)
	{
		if (num%i == 0)
		{
			return 0;
		}
		if (num%i != 0)
		{
			return 1;
		}
	}
}
void main()
{
	int num=0;
	for (num = 100; num <= 200; num++)
	{
		if (is_prime(num) == 1)
		{
			printf("%d ", num);
		}
	}
}*/


//二分查找（函数封装）
/*int binary_search(int ar[10], int size, int num)
{
	int idx_start = 0;
	int idx_end = size - 1;
	int idx_mid;
	while (idx_start <= idx_end)
	{
		idx_mid = (idx_start + idx_end) / 2;
		if (num == ar[idx_mid])
		{
			return idx_mid;
		}
		else if (num < idx_mid)
		{
			idx_end = idx_mid - 1;
		}
		else if (num>idx_mid)
		{
			idx_start = idx_mid + 1;
		}
	}
	printf("查找的数不存在...\n");
	return -1;
}

int main()
{
	int ar[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("6的下标是%d\n",binary_search(ar, 10, 6));
	return 0;
}

//二分查找
/*int main()
{
	int ar[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key;
	printf("请输入一个数：");
	scanf("%d", &key);
	int low = 0;
	int high = sizeof(ar) / sizeof(ar[0])-1;
	
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (key == ar[mid])
		{
			printf("数%d在位置%d\n",key,mid);
			break;
		}
		else if (key < ar[mid])
		{
			high = mid-1;
		}
		else if (key>ar[mid])
		{
			low = mid + 1;
		}
	}
	if (low > high)
		printf("查找的数不存在...\n");
	return 0;
}*/