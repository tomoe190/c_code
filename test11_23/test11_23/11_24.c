#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<time.h>


//���������������в�ͬλ�ĸ���
/*int binary_count(int num)
{
	int count = 0;
	while (num)
	{
		num = num & (num - 1);
		count++;
	}
	return count;
}
int main()
{
	int a = 20;
	int b = 100;
	int tmp = a^b;
	printf("%d\n", binary_count(tmp));
	return 0;
}

//ͳ�ƶ�������1�ĸ���
//����һ
/*int binary_count(int num)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((1 << i)&num)
		{
			count++;
		}
	}
	return count;
}*/
//������
/*int binary_count(int num)
{
	int count = 0;
	while (num)
	{
		num = num & (num - 1);
		count++;
	}
	return count;
}
int main()
{
	int a = 20;
	printf("%d\n", binary_count(a));
	return 0;
}

/*void init(char arry[][3], int x, int y)
{
for (int i = 0; i < x; i++) {
for (int j = 0; j < y; j++) {
arry[i][j] = ' ';
}
}
return;
}
void face(char arry[][3], int x, int y)
{
system("cls");
printf("   | 1 | 2 | 3 \n");
for (int i = 0; i < x; i++) {
printf("---------------\n");
printf(" %d | %c | %c | %c\n", i+1, arry[i][0], arry[i][1], arry[i][2]);
}
return 0;
}
int pos_is_legal(char arry[][3], int x, int y) {
if (x > 3 || x < 1 || y > 3 || y < 1) {
printf("�������λ�ò��Ϸ�!\n");
return 0;
}
if (arry[x-1][y-1] != ' ') {
printf("�������λ���Ѿ���ռ��:%d-%d-%c!\n", x, y, arry[x-1][y-1]);
return 0;
}
return 1;
}
char is_win(char arry[][3], int x, int y) {
for (int i = 0; i < x; i++) {
if (arry[i][0] == arry[i][1] && arry[i][0] == arry[i][2]) {
printf("%c-%c-%c\n", arry[i][0], arry[i][1], arry[i][2]);
return arry[i][0];
}
}
for (int i = 0; i < y; i++) {
if (arry[0][i] == arry[1][i] && arry[0][i] == arry[2][i]) {
printf("%c-%c-%c\n", arry[0][i], arry[1][i], arry[2][i]);
return arry[0][i];
}
}
if (arry[0][0] == arry[1][1] && arry[0][0] == arry[2][2]) {
printf("%c-%c-%c\n", arry[0][0], arry[1][1], arry[2][2]);
return arry[1][1];
}
if (arry[0][y - 1] == arry[1][1] && arry[1][1] == arry[x - 1][0]) {
printf("%c-%c-%c\n", arry[0][y-1], arry[1][1], arry[x-1][0]);
return arry[1][1];
}
return 'N';
}
void computer(char arry[][3], int x, int y)
{
while (1) {
int i = rand() % 3;
int j = rand() % 3;
if (arry[i][j] == ' ') {
arry[i][j] = 'O';
break;
}
}
return ;
}
int result(char arry[][3], int x, int y, int *count)
{
(*count)--;
char ch = is_win(arry, x, y);
switch (ch){
case 'X':
printf("��Ӯ�ˣ����~~\n");
break;
case 'O':
printf("�����ˣ����~~\n");
break;
case 'N':
if (*count == 0) {
printf("������~������̺͵�����һ����~\n");
break;
}
return 1;
default:
return 1;
}
return 0;
}
int main()
{
srand(time(NULL));
char arry[3][3];
int count = 9;
init(arry, 3, 3);
while (1) {
face(arry, 3, 3);
printf("��������Ҫָ����λ������: ");
int x, y;
scanf("%d %d", &x, &y);
if (!pos_is_legal(arry, x, y)) {
continue;
}
arry[x-1][y-1] = 'X';
if (result(arry, 3, 3, &count) == 0) {
break;
}
face(arry, 3, 3);
Sleep(1000);
computer(arry, 3, 3);
face(arry, 3, 3);
if (result(arry, 3, 3, &count) == 0) {
break;
}
}

system("pause");
return 0;
}

/*void init(char ar[][3], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			ar[i][j] = ' ';
		}
	}
}
void face(char ar[][3],int x,int y)
{
	system("cls");
	printf("   | 1 | 2 | 3 \n");
	for (int i = 0; i < x; i++)
	{
		printf("---------------\n");
		printf(" %d | %c | %c | %c \n", i+1, ar[i][0],ar[i][1],ar[i][2]);
	}
	return ;
}
int pos_is_legal(char ar[][3],int x, int y)
{
	if (x>3 || x<1 || y>3 || y < 1) 
	{ 
		printf("�������λ�ò��Ϸ���\n");
		return 0;
	}
	if (ar[x][y] != ' ')
	{
		printf("�������λ���Ѿ���ռ�ã�\n");
	}
	return 0;
}
char is_win(char ar[][3], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		if (ar[i][1] == ar[i][1] && ar[i][0] == ar[i][2])
		{
			return ar[i][0];
		}
	}
	for (int i = 0; i < y; i++)
	{
		if (ar[0][i] == ar[1][i] && ar[0][i] == ar[2][i])
		{
			return ar[0][i];
		}
	}
	if (ar[0][0] == ar[1][1] && ar[0][0] == ar[2][2])
	{
		return ar[1][1];
	}
	if(ar[0][y-1] == ar[1][1] && ar[1][1] == ar[x - 1][0])
	{
		return ar[1][1];
	}
	return 'N';
}
void computer(char ar[3][3], int x, int y)
{
	while (1)
	{
		int i = rand() % 3;
		int j = rand() % 3;
		if (ar[i][j]== ' ')
		{
			ar[i][j] = 'O';
			break;
		}
	} 
}
int result(char ar[][3], int x, int y,int *count)
{
	(*count)--;
	char ch = is_win(ar, x, y);
	switch (ch)
	{
	case'X':
		printf("��Ӯ�ˣ�\n");
		break;;
	case'O':
		printf("�����ˣ�\n");
		break;
	case'N':
		if (*count == 0){
			printf("�����֣�\n");
			break;
		}
		return 1;
	}
	return 0;
}
int main()
{
	srand(time(NULL));
	char ar[3][3];
	int count = 9;
	init(ar, 3, 3);
	while (1)
	{
		int x, y;
		face(ar, 3, 3);
		printf("��������Ҫָ����λ�����꣺");
		
		scanf("%d %d", &x, &y);
		if (!(pos_is_legal(ar, x, y)))
		{
			continue;
		}
		ar[x - 1][y - 1] = 'X';
		if (result(ar, x, y,&count) == 0)
		{
			break;
		}
		face(ar, 3, 3);
		Sleep(1000);
		computer(ar, 3, 3);
		face(ar, 3, 3);
		if (result(ar, x, y, &count) == 0)
		{
			break;
		}
	}
	return 0;
}


//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
/*void Swap(int ar[],int len)
{
	int left = 1;
	int right = len - 1;
	for (right= 1; right< len; right++)
	{
		if (ar[right] % 2 == 0)
		{

		}
	}

}
int main()
{
	int ar[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int len = sizeof(ar) / sizeof(ar[0]);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", ar[i]);
	}
	Swap(ar,len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", ar[i]);
	}
	return 0;
}



//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ��   ��δ�����


//��ͼ����������������            ��δ�����
int main()
{
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hello bit\n");
	}
	return 0;
}

//������A�е�����������B�е����ݽ��н���������һ����
/*void Swap(int ar1[], int ar2[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int tmp = ar1[i];
		ar1[i] = ar2[i];
		ar2[i] = tmp;
	}
}
int main()
{
	int ar1[] = { 1, 2, 3, 4, 5 };
	int ar2[] = { 6, 7, 8, 9, 10 };
	int len = sizeof(ar1) / sizeof(ar1[0]);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", ar1[i]);
	}
	printf("\n");
	for (int j = 0; j < len; j++)
	{
		printf("%d ", ar2[j]);
	}
	printf("\n");
	Swap(ar1, ar2,len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", ar1[i]);
	}
	printf("\n");
	for (int j = 0; j < len; j++)
	{
		printf("%d ", ar2[j]);
	}
	printf("\n");
	return 0;
}

//����һ�����飬��ɶ�����Ĳ���
//ʵ�ֺ���init()��ʼ������ȫΪ0
//ʵ��print()��ӡ�����ÿ��Ԫ��
//ʵ��reverse()�����������Ԫ�ص�����
/*void init(int ar[],int count)
{
	for (int i = 0; i < count; i++)
	{
		ar[i] = 0;
	}
	return ;
}
void print(int ar[], int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
	return;
}
void reverse(int ar[], int count)
{
	for (int i=0; i < count / 2; i++)
	{
		int tmp = ar[i];
		ar[i] = ar[count-i-1];
		ar[count - 1 - i] = tmp;

	}
	return;
}
int main()
{
	int ar[10];
	int size = sizeof(ar) / sizeof(ar[0]);
	init(ar, size);
	for (int i = 0; i < size; i++)
	{
		ar[i] = i;
	}
	print(ar, size);
	reverse(ar, size);
	print(ar, size);
	return 0;
}*/


//ð������
/*void BubbleSort(int ar[],int len)
{
	int i = 0;
	for (i; i < len-1; i++)
	{
		int j=0;
		for (j; j < len-i - 1; j++)
		{
			if (ar[j] < ar[j + 1])
			{
				int tmp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int ar[10] = { 14, 2, 5, 1, 45, 8, 7, 9, 10, 22 };
	int len = sizeof(ar) / sizeof(ar[0]);
	BubbleSort(ar, len);
	int i = 0;
	for (i; i < len; i++)
	{
		printf("%d ", ar[i]);
	}
	return 0;
}*/