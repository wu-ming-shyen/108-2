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
	
	printf("�п�J�@�ӼƦrm:");
	scanf("%d", &m);
	printf("�z��J���Ʀrm��:%d\n\n",m);
	printf("�п�J�@�ӼƦrn:");
	scanf("%d", &n);
	printf("�z��J���Ʀrn��:%d\n",n);
	
	printf("��X(��Q2 �� 3 �㰣�����):");
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
	printf("\n\n\n�п�J�@�Ӿ��:");
	scanf("%d", &Int);
	printf("�z��J����Ƭ�:%d\n",Int);
	
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
