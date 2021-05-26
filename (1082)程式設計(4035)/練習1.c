#include <stdio.h>
#include <stdlib.h>

main() 
{
	//one();
	//two();
	//three();
	//four();
	five();
	
	
	return 0;
}

one()
{
	int Int=0,i=0,sum=0;
	printf("請輸入一個奇數:");
	scanf("%d", &Int);
	printf("你所輸入的奇數為:%d\n",Int);
	
	for(i=1;i<Int;i+=2)
	{
		printf("%d+",i);
		sum+=i;
	}
	printf("%d",Int);
	sum+=Int;
	printf("=%d\n\n\n",sum);
}

two()
{
	int Int=0,i=0,sum=0;
	printf("請輸入一個整數:");
	scanf("%d", &Int);
	printf("您輸入的整數為:%d\n",Int);
	
	for(i=0;i<=Int;i++)
	{
		if(i%3==0 && i%8==0)
		{
			printf("%d可被同時被3與8整除之所有整數\n",i);
			sum+=i;
		}
	}
	printf("可同時被3與8整除之所有整數和=%d\n\n\n",sum);
}

three()
{
	int M=0,i=0,sum=0;
	printf("請輸入繩子長度:");
	scanf("%d", &M);
	printf("繩子的程度為:%d\n",M);
	
	for(i=1;M>=5;i++)
	{
		M/=2;
		printf("第%d天，繩子長度為:%d\n",i,M);
	}
	printf("第%d天時，繩子長度會短於5公尺\n\n\n",i-1);
}

four()
{
	int Int=0,i=0,j=0;
	printf("請輸入一個整數:");
	scanf("%d", &Int);
	printf("您輸入的整數為:%d\n",Int);
	
	for(i=1;i<=Int;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

five()
{
	int Int=0,i=0,j=0,k=0;
	printf("請輸入一個整數:");
	scanf("%d", &Int);
	printf("您輸入的整數為:%d\n",Int);
	
	for(i=1;i<=Int;i++)
	{
		for(j=Int-i;j>=0;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}
