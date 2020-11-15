#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
/*#include<stdlib.h>*/

void Swap(int *a,int*b)
{
	int *a, *b;
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("swap before:%d", a);
	Swap(&a,&b);
	printf("swap after:")
}
/*int main()
{
	int year;
	printf("请输入年份：");
	scanf("%d", &year);
	if (((year % 4 == 0) && (year % 100 != 0)) || year % 40 == 0)
	{
		printf("%d是闰年。\n", year);
	}
	else
		printf("%d不是闰年。\n", year);
	return 0;

}

/*int main()
{
	int i;
	int n = 0;
	printf("请输入一个数：");
	scanf("%d", &n);
	for (i = 1; i <= n; ++i)
	{
		int j;
		for (j = 1; j <= i; ++j)
		{
			printf("%d*%d=%d ", i, j, i*j);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}



/*int is_prime(int num)
{
	int num;
	for (int i = 2; i <= sqrt(1.0*num); i++)
	{
		if (num%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	for (int i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}


/*int main()
{
	int n;
	int count =0;
	for (n = 100; n <= 200; n++)
	{
		int i = 0;
		for (i = 2; i < n; i++)
		{
			if (n%i == 0)
				break;
		}
		if (n ==i)
		{
			printf("%d\n", n);
			count++;
		}
	}
		printf("合计%d个素数\n", count);
		return 0;
}*/