#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
int fibonacci(int n)
{
	int fac[1024] = { 1, 1,1 };
	for (int i = 3; i <= n; i++)
	{
		fac[i] = fac[i - 1] + fac[i - 2];
	}
	return fac[n];
}
int main()
{
	printf("%d\n", fibonacci(3));
	return 0;
}



//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
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
}


//дһ���ݹ麯��DigitSum(n),����һ���Ǹ����������������������֮��
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
}

//��дһ������reverse_string(char *string)(�ݹ�ʵ�֣�
//�ǵݹ�
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
}*/
//�ݹ�
/*char *reverse_string(char *string)
{
	if (strlen(string)<2)
	{
		return string;
	}
	int len = strlen(string) - 1;
	char ch = *string;             //�������ַ�
	*string = *(string + len);//��ĩβ�ַ���ֵ�����ֽڿռ�
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
} 

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen�������ַ����ĳ��ȣ���ʼλ�õ�\0����
//�ǵݹ�
/*int mystrlen(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;                   //������һ����ָԪ��
		count++;
	}
	return count;
}
int main()
{
	printf("%d\n",mystrlen("nihao"));
	return 0;
}
//�ݹ�
int mystrlen(char *str)
{
	if (*str == '\0')
	{
		return 0;
	}
	return 1 + mystrlen(str + 1);
}



//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//�ǵݹ�
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
//�ݹ�
int factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n*factorial(n - 1);
}


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//ÿ�δ�ӡ���ֵĸ�λ������ӡ֮�󣬳���10��Ȼ���´γ�������ֵĸ�λ��
/*void print(int num)
{
	printf("%d ", num % 10);
	if (num < 10)
	{
		return;                //�˳��������
	}
	print(num / 10);
}
int main()
{
	print(6789);
	return 0;
}*/
//��ӡ���ǣ�9876
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
}
//��ӡ���ǣ�6789

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�����
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
}

//����������
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

//���1000~2000�������                        ������
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


//ʵ��һ���������ж�һ�����ǲ�������(������װ��        ������
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


//���ֲ��ң�������װ��
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
	printf("���ҵ���������...\n");
	return -1;
}

int main()
{
	int ar[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("6���±���%d\n",binary_search(ar, 10, 6));
	return 0;
}

//���ֲ���
/*int main()
{
	int ar[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key;
	printf("������һ������");
	scanf("%d", &key);
	int low = 0;
	int high = sizeof(ar) / sizeof(ar[0])-1;
	
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (key == ar[mid])
		{
			printf("��%d��λ��%d\n",key,mid);
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
		printf("���ҵ���������...\n");
	return 0;
}*/