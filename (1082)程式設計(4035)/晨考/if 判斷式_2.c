#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() 
{
	int Month=0;
	
	
	printf("�п�J�@�Ӥ��:");
	scanf("%d", &Month);
	printf("\n�z�ҿ�J�����:%d\n",Month);
	
	if(Month==3 || Month==4 ||Month==5)
	{
		printf("%d����O�K�u",Month);
	}
		else if(Month==6 || Month==7 ||Month==8)
		{
			printf("%d����O�L�u",Month);
		}
			else if(Month==9 || Month==10 ||Month==11)
			{
				printf("%d����O��u",Month);
			}
				else if(Month==12 || Month==1 ||Month==2)
				{
					printf("%d����O�V�u",Month);
				}
	else
	{
		printf("�S�o�Ӥ��");
	}
	
	return 0;
}
