#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));     //7
	printf("%d\n", sizeof(arr + 0)); //4
	printf("%d\n", sizeof(*arr));    //1
	printf("%d\n", sizeof(arr[1]));  //1
	printf("%d\n", sizeof(&arr));    //4
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0] + 1)); //4

	printf("%d\n", strlen(arr));     //6
	printf("%d\n", strlen(arr + 0)); //6
	//printf("%d\n", strlen(*arr));    //
	//printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));    //6
	printf("%d\n", strlen(&arr + 1));//?
	printf("%d\n", strlen(&arr[0] + 1));//5
}