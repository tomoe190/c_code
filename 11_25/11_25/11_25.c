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