#include <stdio.h>
#include <stdlib.h>

main() 
{
	//one();
	two();
	//three();
	//four();
	return 0;
}

one()
{
	int i=0,j=0,Number=0;
	
	printf("�п�J�@�ӼƦr:");
	scanf("%d",&Number);
	printf("�z��J���Ʀr��:%d\n",Number);
	
	printf("��X:");
	for(i=2;i<Number;i++)
	{
		for(j=2;(j <= i) && ((i % j) != 0);j++);
		if(j == i)
		{
			printf(" %d",i);
		}
	}
}

two()
{
	int kwh=0,money=0;
	printf("\n\n�п�J�C��ιq�q\n");
	scanf("%d", &kwh);
	printf("��J���ιq�q%d\n",kwh);
	if(kwh<=20)
	{
		money = 10*kwh;
	}
	else if(kwh<=60)
	{
		money = 12*kwh;
	}
	else if(kwh<=80)
	{
		money = 18*kwh;
	}
	else
	{
		money = 22*kwh;
	}
	printf("����q�O:%d��",money);
}



three()
{
	int GCD(int a, int b)
	{
		if (b)
	            while((a %= b) && (b %= a));
		return a + b;
	}
	
	int LCM(int a, int b) {
	    return a * b / GCD(a,b);
	}

	int a=0,b=0;
	printf("\n\n�п�J��Ӽ�");
	scanf("%d %d", &a, &b);
	printf("��J:A=%d B=%d\n",a,b);
	printf("��X:");
	printf("Gcd=%d ",GCD(a, b)); 
    printf("Lcm=%d ",LCM(a, b));
	
}

four()
{
	int D1=0,D5=0,D10=0,money=0;
	float moneyF=0;
	
	printf("\n\n�п�J������B");
	scanf("%f", &moneyF);
	money=(int)moneyF;
	while(moneyF != money)
	{
		printf("Error");
		printf("\n�п�J������B");
		scanf("%f", &moneyF);
		money=(int)moneyF;
	}
	printf("������B=%d",money);
	D10=money/10;
	D5=(money%10)/5;
	D1= (money%10)%5;
	printf("\n��X:10��%d�� 5��%d�� 1��%d��",D10,D5,D1);
}
