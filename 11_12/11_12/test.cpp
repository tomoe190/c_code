#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
/*int game()
{
	srand(time(NULL)); //取当前系统的时间做随机数的种子
	int num = rand() % 100;   //大于100的数字最后都会被取余下来成0~99的数字
	while (1)
	{
		int input;
		printf("请输入你猜测的数字：");
		scanf("%d", &input);
		if (input > num)
		{
			printf("你猜得太大了\n");
			continue;
		}
		if (input < num)
		{
			printf("你猜的太小了\n");
			continue;
		}
		printf("恭喜你猜对了\n");
		break;
	}
	return 0;
}

void menu()
{
	printf("**********************************\n");
	printf("*****        1.play          *****\n");
	printf("*****        0.exit          *****\n");
	printf("**********************************\n");
}

int main()
{
	int input = 0;

	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
		return 0;
}



/*void main()
{
	int ar[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(ar) / sizeof(ar[0]);
	int low = 0;
	int high = n - 1;
	int key;
	printf("请输入要查找的数字：>");
	scanf("%d", &key);

	int mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (key == ar[mid])
		{
			break;
		}
		if (key < ar[mid])
		{
			high = mid - 1;
		}
		if (key>ar[mid])
		{
			low = mid+ 1;
		}
	}
	if (low > high)
	{
		printf("要查找的数不存在...\n");
	}
	else
		printf("要查找的%d在：位置%d\n",key, mid);
}



/*void main()
{
	int i;
	int count = 0;
	for (i = 1; i <= 100; ++i)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("%d\n", count);
}

/*#include<stdio.h>
void main()
{
	int i, j;
	for (i = 100; i <= 200; ++i)
	{
		for (j = 2; j <i ; ++j)
		{
			if (i%j == 0)
				break;
		}
		if (j >=i)
		{
			printf("%d\n", i);
		}
	}
}

/*void main()
{
	int i;       //分母       
	double sum = 0.0;
	int a = 1;   //符号
	for (i = 1; i <= 100; i++)
	{
		sum += a *1.0/ i;
		a = (-1)*a;
	}
	printf("%f\n", sum);

}

/*void main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int ar[3] = { a, b, c };

	//指针数组，存放指针的数组
	int *br[3] = { &a, &b, &c };
	int(*cr)[3];     //数组指针
}


/*void main()
{
	int a = 100;
	int *p = &a;
	int **s = &p;
}

/*void main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *p1 = &arr[0];     //首地址给它
	int *p2 = arr;         //把数组名里的内容赋值给他

	for (int i = 0; i < 10; ++i)
	{
		printf("%d", *(p2 + i));
		printf("%d", p2[i]);
		printf("%d",*(arr+i));
	}
	printf("\n");
}*/