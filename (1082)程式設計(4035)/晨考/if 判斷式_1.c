#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() 
{
	char Char=0;
	int Upper_Case=0,Lower_Case=0;
	
	printf("請輸入一個字元:");
	scanf("%c", &Char);
	printf("\n您所輸入的字元:%c\n",Char);
	
	if(isupper(Char))
	{
		printf("%c為:大寫英文字母",Char);	
	}
		else if(islower(Char))
		{
			printf("%c為:小寫英文字母",Char);
		}
			else if(isupper(Char)==islower(Char))
			{
				printf("%c為:數字",Char);
			}
	else
	{
		printf("Error");
	}
	
	return 0;
}
