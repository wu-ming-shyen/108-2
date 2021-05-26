#include <stdio.h>
#include <stdlib.h>

main() 
{
	//One();
	Two();
	return 0;
}

One()
{
	int i=0,Number=0;
	
	printf("請輸入一個數字:");
	scanf("%d",&Number);
	printf("您輸入的數字為:%d\n",Number);
	
	printf("輸出:");
	for(i=1;i<Number;i++)
	{
		if(i%2==0 || i%3==0)
		{
			printf(" %d",i);
		}
	}
}

Two()
{
	int Int=0,i=0,j=0,k=0;
	printf("\n\n\n請輸入一個整數:");
	scanf("%d", &Int);
	printf("您輸入的整數為:%d\n",Int);
	
	for(i=1;i<=Int;i++)
	{
		for(j=Int-i;j>=0;j--)
		{
			printf("*");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}
