#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
/*int game()
{
	srand(time(NULL)); //ȡ��ǰϵͳ��ʱ���������������
	int num = rand() % 100;   //����100��������󶼻ᱻȡ��������0~99������
	while (1)
	{
		int input;
		printf("��������²�����֣�");
		scanf("%d", &input);
		if (input > num)
		{
			printf("��µ�̫����\n");
			continue;
		}
		if (input < num)
		{
			printf("��µ�̫С��\n");
			continue;
		}
		printf("��ϲ��¶���\n");
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
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
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
	printf("������Ҫ���ҵ����֣�>");
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
		printf("Ҫ���ҵ���������...\n");
	}
	else
		printf("Ҫ���ҵ�%d�ڣ�λ��%d\n",key, mid);
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
	int i;       //��ĸ       
	double sum = 0.0;
	int a = 1;   //����
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

	//ָ�����飬���ָ�������
	int *br[3] = { &a, &b, &c };
	int(*cr)[3];     //����ָ��
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
	int *p1 = &arr[0];     //�׵�ַ����
	int *p2 = arr;         //��������������ݸ�ֵ����

	for (int i = 0; i < 10; ++i)
	{
		printf("%d", *(p2 + i));
		printf("%d", p2[i]);
		printf("%d",*(arr+i));
	}
	printf("\n");
}*/