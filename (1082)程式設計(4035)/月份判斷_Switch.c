#include <stdio.h>
#include <stdlib.h>

main() 
{
	char Char=0;
	
	int Int=0;
	/*
	printf("�п�J�@�Ӧr��:");
	scanf("%c", &Char);
	printf("\n�z�ҿ�J���r��:%c\n",Char);
	
	switch(true)
	{
		case isupper(Char):
			printf("Big");
			break;
		case islower(Char);
			printf("Small");
			break;
		case isupper(Char)==islower(Char):
			printf("Number");
		default:
			printf("Error");
	}
	*/
	printf("�п�J�@�ӼƦr:");
	scanf("%d", &Int);
	printf("\n�z�ҿ�J���Ʀr:%d\n",Int);
	
	switch(Int)
	{
		case 1:
			printf("�V");
			break;
		case 2:
			printf("�V");
			break;
		case 3:
			printf("�K");
			break;
		case 4:
			printf("�K");
			break;
		case 5:
			printf("�K");
			break;
		case 6:
			printf("�L");
			break;
		case 7:
			printf("�L");
			break;
		case 8:
			printf("�L");
			break;
		case 9:
			printf("��");
			break;
		case 10:
			printf("��");
			break;
		case 11:
			printf("��");
			break;
		case 12:
			printf("�V");
			break;
		default:
			printf("Error");
	}
	return 0;
}
