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
	printf("�п�J�@�ө_��:");
	scanf("%d", &Int);
	printf("�A�ҿ�J���_�Ƭ�:%d\n",Int);
	
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
	printf("�п�J�@�Ӿ��:");
	scanf("%d", &Int);
	printf("�z��J����Ƭ�:%d\n",Int);
	
	for(i=0;i<=Int;i++)
	{
		if(i%3==0 && i%8==0)
		{
			printf("%d�i�Q�P�ɳQ3�P8�㰣���Ҧ����\n",i);
			sum+=i;
		}
	}
	printf("�i�P�ɳQ3�P8�㰣���Ҧ���ƩM=%d\n\n\n",sum);
}

three()
{
	int M=0,i=0,sum=0;
	printf("�п�J÷�l����:");
	scanf("%d", &M);
	printf("÷�l���{�׬�:%d\n",M);
	
	for(i=1;M>=5;i++)
	{
		M/=2;
		printf("��%d�ѡA÷�l���׬�:%d\n",i,M);
	}
	printf("��%d�ѮɡA÷�l���׷|�u��5����\n\n\n",i-1);
}

four()
{
	int Int=0,i=0,j=0;
	printf("�п�J�@�Ӿ��:");
	scanf("%d", &Int);
	printf("�z��J����Ƭ�:%d\n",Int);
	
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
	printf("�п�J�@�Ӿ��:");
	scanf("%d", &Int);
	printf("�z��J����Ƭ�:%d\n",Int);
	
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
