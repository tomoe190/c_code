#include <stdio.h>
int main()
{
	int month = 0;
	int year = 0;
	switch (month)
	{
		printf("%d��%d���ж����죺\n");
		scanf("%d %d", &year&month);
	case 1:
		printf("31��\n");
		break;
	case 2:
		if (year % 400 == 0 || (year % 4 == 0 &&( year % 100!== 0));
		printf("29��\n");
		else
			printf("28��\n");
		break;
	case 3:
		printf("31��\n");
		break;
	case 4:
		printf("30��\n");
		break;
	case 5:
		printf("31��\n");
		break;
	case 6:
		printf("30��\n");
		break;
	case 7:
		printf("31��\n");
		break;
	case 8:
		printf("31��\n");
		break;
	case 9:
		printf("30��\n");
		break;
	case 10:
		printf("31��\n");
		break;
	case 11:
		printf("30��\n");
		break;
	case 12:
		printf("31��\n");
		break;
	default:
		printf("�������\n");
		break;
	}
	return 0;
}

