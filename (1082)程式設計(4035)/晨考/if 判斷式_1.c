#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() 
{
	char Char=0;
	int Upper_Case=0,Lower_Case=0;
	
	printf("�п�J�@�Ӧr��:");
	scanf("%c", &Char);
	printf("\n�z�ҿ�J���r��:%c\n",Char);
	
	if(isupper(Char))
	{
		printf("%c��:�j�g�^��r��",Char);	
	}
		else if(islower(Char))
		{
			printf("%c��:�p�g�^��r��",Char);
		}
			else if(isupper(Char)==islower(Char))
			{
				printf("%c��:�Ʀr",Char);
			}
	else
	{
		printf("Error");
	}
	
	return 0;
}
