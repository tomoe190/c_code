#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��
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
	printf("ret=%d\n", ret);           //ƽ̨��ͬ��һ��
	return 0;
}


//
/*int i;            //ȫ�ֱ�������ʼ����Ĭ��Ϊ0���ֲ���������ʼ��Ĭ��Ϊ���ֵ��
int main()
{
	i--;           //-1
	if (i > sizeof(i))  //sizeof���ص�ֵ��һ���޷�������
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}


//��������������������ʱ����
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


//��ӡ���������Ƶ�����λ��ż��λ
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