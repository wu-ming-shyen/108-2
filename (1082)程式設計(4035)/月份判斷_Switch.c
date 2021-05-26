#include <stdio.h>
#include <stdlib.h>

main() 
{
	char Char=0;
	
	int Int=0;
	/*
	printf("請輸入一個字元:");
	scanf("%c", &Char);
	printf("\n您所輸入的字元:%c\n",Char);
	
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
	printf("請輸入一個數字:");
	scanf("%d", &Int);
	printf("\n您所輸入的數字:%d\n",Int);
	
	switch(Int)
	{
		case 1:
			printf("冬");
			break;
		case 2:
			printf("冬");
			break;
		case 3:
			printf("春");
			break;
		case 4:
			printf("春");
			break;
		case 5:
			printf("春");
			break;
		case 6:
			printf("夏");
			break;
		case 7:
			printf("夏");
			break;
		case 8:
			printf("夏");
			break;
		case 9:
			printf("秋");
			break;
		case 10:
			printf("秋");
			break;
		case 11:
			printf("秋");
			break;
		case 12:
			printf("冬");
			break;
		default:
			printf("Error");
	}
	return 0;
}
