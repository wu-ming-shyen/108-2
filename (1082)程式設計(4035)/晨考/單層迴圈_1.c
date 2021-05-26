#include <stdio.h>
#include <stdlib.h>

main() 
{
	One();
	//Two();
	return 0;
}

One()
{
	int m=0,n=0,Number=0;
	
	printf("請輸入一個數字m:");
	scanf("%d", &m);
	printf("您輸入的數字m為:%d\n\n",m);
	printf("請輸入一個數字n:");
	scanf("%d", &n);
	printf("您輸入的數字n為:%d\n",n);
	
	printf("輸出(能被2 或 3 整除的整數):");
	for(Number=m+1;Number<n;Number++)
	{
		if(Number%2==0 || Number%3==0)
		{
			printf(" %d",Number);
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
