#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 5

void main()
{
	int a = 100;
	int *p = &a;
	int **s = &p;
}

/*int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *p2 = arr;
	//int *p1 = arr;  //����һ��������ͬ����������Ԫ�صĵ�ַ��ֵ��p1��p2

	for (int i = 0; i < 10; ++i)
	{
		//printf("%d", *(p2 + i));
		printf("%d", p2[i]);
		printf("%d", *(arr + i));     //a[i]=>*(a+i)
	}
	printf("\n");
	return 0;
}

/*int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	printf("%p\n", arr);                     //�������������������
	printf("%p\n", &arr[0]);                 //����������Ԫ��ȡ��ַ
	printf("%p\n", &arr);                    //ȡ��ַ���������������ĵ�ַ
	return 0;
}

/*void main()
{
	char ar[10] = { 1,2,3,4,5,6,7,8,9,10};
	char *end = &ar[10];
	char *star = &ar[0];

	int n = end - star;
	printf("n=%d\n", n);
}

/*void main()
{
	char ar[5] = { 'a', 'b', 'c', 'd', 'e' };
	char *end = &ar[5];
	char *star = &ar[0];

	int len = end- star;
	printf("len=%d\n", len);
}

/*void main()
{
	int values[SIZE];
	int *vp = &values[SIZE - 1];
	while (vp >= &values[0])
	{
		*vp = 0;
		vp--;
	}
}

/*void main()
{
	int values[SIZE];
	int *vp = values;
	while (vp < &values[SIZE])
	{
		*vp = 0;
		vp++;
	}
}*/