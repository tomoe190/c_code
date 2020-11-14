#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

/*int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int a;
	a = m%n;
	int x;
	x = m*n;
	if (a == 0)
	{
		printf("%d %d", n, x / n);
	}
	else
	{
		while (a != 0)
		{
			m = n;
			n = a;
			a = m%n;
		}
		printf("%d %d", n, x / n);
	}
	return 0;
}

/*int main()
{
	int a, b, c;
	printf("请输入两个数：");
	scanf("%d %d", &a, &b);
	while (b)
	{
		c = a%b;
		a = b;
		b = c;
	}
	printf("%d\n", a);
	return 0;
}


/*int main()
{
	int i = 100;
	int a, b, c;
	for (i = 100; i <= 999;i++)
	{
		a = i / 100;
		b = (i % 100) /10;
		c = i % 10;
		if (i == pow((float)a, 3) + pow((float)b, 3) + pow((float)c, 3))
			printf("%d\t", i);
	}
	printf("\n");
	return 0;
}*/

