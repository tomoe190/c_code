#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
union Un
{
	int i;
	char c;
};
void main()
{
	union Un un;
	// ��������Ľ����һ������
	printf("%x\n", &(un.i));
	printf("%x\n", &(un.c));

	//��������Ľ����ʲô��
	un.i = 0x11223344;  //44 33 22 11
	un.c = 0x55;        //55 33 22 11
	printf("%x\n", un.i);
}