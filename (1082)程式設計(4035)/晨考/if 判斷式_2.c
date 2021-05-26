#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() 
{
	int Month=0;
	
	
	printf("請輸入一個月份:");
	scanf("%d", &Month);
	printf("\n您所輸入的月份:%d\n",Month);
	
	if(Month==3 || Month==4 ||Month==5)
	{
		printf("%d月份是春季",Month);
	}
		else if(Month==6 || Month==7 ||Month==8)
		{
			printf("%d月份是夏季",Month);
		}
			else if(Month==9 || Month==10 ||Month==11)
			{
				printf("%d月份是秋季",Month);
			}
				else if(Month==12 || Month==1 ||Month==2)
				{
					printf("%d月份是冬季",Month);
				}
	else
	{
		printf("沒這個月份");
	}
	
	return 0;
}
