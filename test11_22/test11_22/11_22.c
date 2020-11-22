#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>


void main()
{
	union
	{
		short k;
		char i[2];
	}*s,a;

	s = &a;
	s->i[0] = 0x39;
	s->i[1] - 0x38;

printf("%x\n", a.k);    //38,39
}

/*char* my_strcpy(char *strDest, char *strSrc)
{
	assert(strDest != NULL && strSrc != NULL);    //检查参数
	char *pDest = strDest;
	char *pSrc = strSrc;                       //保护参数
	
	while(*pSrc!='\0')
	{
		*pDest++ = *pSrc++;
		//strDest++; 
		//strSrc++;
	}
	*pDest = '\0';
	return strDest;
},

void main()
{
	char str1[] = "Hello";
	char *str2 = "Bit.";
	printf("str1=%s\n", str1);
	char *pret=my_strcpy(str1, str2);
	printf("str1=%s\n", str1);
}*/