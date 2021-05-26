#include <stdio.h>
#include <stdlib.h>

void _1_1()
{
	int i=0,j=0,X=0,Y=0;
	printf("請輸入兩個大於0的整數:");
	scanf("%d %d", &X, &Y);
	printf("X=%d Y=%d\n",X,Y);
	for(i=0;i<X;i++)
	{
		for(j=0;j<Y;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void _1_2()
{
	unsigned int X=0,num=0,multiple=10;
	printf("輸入一串大於6位數的數字:");
	scanf("%d", &num);
	printf("輸入:%d\n輸出:",num); 
	while(num!=0)
	{
		X=num%10;
		num/=10;
		printf("%d",X);
	}
}

void _1_3()
{
	int X=0;
	printf("輸入 X:");
	scanf("%d", &X);
	printf("輸入:%d\n",X);
	if(X-10<0)
	{
		printf("X=%d，X-10<0",X);
	}
	else
	{
		printf("X=%d，X-10!<0",X);
	}
}

void _1_4()
{
	int i=1,X=0,num=0,Binary=0;
	printf("輸入十進位數字:");
	scanf("%d", &num);
	printf("輸入:%d\n",num);
	while(num!=0)
	{
		X=num%2;
		num/=2;
		Binary+=X*i;
		i*=10;
	}
	printf("%d",Binary);
}

void _1_5()
{
	int i=0,j=0,k=0,n=0;
	printf("輸入一個大於0的整數 X:");
	scanf("%d", &n);
	printf("輸入:%d\n",n);
	if(n%2==1)
	{
		for(i=1;i<=n/2+1;i++)
		{
			for(j=1;j<=n/2+i;j++)      
			{
				if(j>=n/2-i+2)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
		for(i=n/2;i>=1;i--)
		{
			for(j=1;j<=n/2+i;j++)
				if(j>=n/2-i+2)
					printf("*");
				else
					printf(" ");
			printf("\n");
		}
	}
	if(n%2==0)
	{
		for(i=1;i<=n/2;i++)
		{
			for(j=n/2-i;j>0;j--)
			{
				printf(" ");
			}
			for(k=1;k<=i;k++)
			{
				printf("**");
			}
			printf("\n");
		}
		for(i=1;i<=n/2;i++)
		{
			for(j=1;j<i;j++)
			{
				printf(" ");
			}
			for(k=n/2-i;k>=0;k--)
			{
				printf("**");
			}
			printf("\n");
		}
	}
	
}

void _1_6()
{
	float X=0,Steel=987,Cement=377;
	printf("輸入長城欲建設為 X 公里長:");
	scanf("%f", &X);
	printf("輸入:%.3f\n",X);
	printf("需%.3f公噸的鋼鐵與%.3f公噸的水泥",((X*100)*Steel)/1000,((X*100)*Cement)/1000);
}

void _1_7()
{
	int i=0,X=0,m=0,count=0;
	do
	{
		printf("輸入一串數字 X ，且 9999 > X > 999:");
		scanf("%d", &X);
	}while(X<999||X>9999);
	
	printf("輸入:%d\n",X);
	while(count<3)
	{
		m%2==0?(X+=m):(X-=m);
		for(i=2;i<X && X%i!=0;++i);
		if(i==X)
		{
			printf("%d ",X);
			++count;
		}
		m++;
	}
}

void _1_8()
{
	int i=0,j=0,X=0;
	do
	{
		printf("輸入一個奇數 X，且 X > 7:");
		scanf("%d", &X);
	}while(X%2==0 || X<=7);
	
	printf("輸入:%d\n",X);
	
	for(i=1;i<=X;i++)
	{
		if(i==1)
		{
			printf("  ");
			for(j=0;j<X-2;j++)
			{
				printf("王");
			}
			printf("\n");
		}
		else if(i==X/2)
		{
			printf("    ");
			for(j=0;j<X-4;j++)
			{
				printf("王");
			}
			printf("\n");
		}
		else if(i==X)
		{
			for(j=0;j<X;j++)
			{
				printf("王");
			}
		}
		else
		{
			for(j=0;j<X/2;j++)
			{
				printf("  ");
			}
			printf("王\n");
		}
	}
}

void _1_9()
{
	int i=0,X=0,Y=0,R=0,num=0,count=0;
	do
	{
		printf("隨機輸入一串數字，此數字需 > 999:");
		scanf("%d", &num);
	}while(num<=999);
	printf("輸入:%d\n",num);
	R=num;
	Y=(num/10)%10;
	while(num!=0)
    {
        num/=10;
        ++count;
    }
    for(i=0;i<count-2;i++)
    {
    	R/=10;
	}
	X=R%10;
	printf("%dX%d=%d",X,Y,X*Y);
}

void _1_10()
{
	int i=1,X=0,num=0,Octal=0;
	printf("輸入十進位數字:");
	scanf("%d", &num);
	printf("輸入:%d\n",num);
	while(num!=0)
	{
		X=num%8;
		num/=8;
		Octal+=X*i;
		i*=10;
	}
	printf("八進制的X=%d",Octal);
}

int main()
{/* 
	_1_1();
	printf("\n");
	_1_2();
	printf("\n");
	_1_3();
	printf("\n");
	_1_4();
	printf("\n");
	_1_5();
	printf("\n");
	_1_6();
	printf("\n");
	_1_7();
	printf("\n");
	_1_8();
	printf("\n");
	_1_9();
	printf("\n");
	_1_10();
	printf("\n");
*/	return 0;
}
