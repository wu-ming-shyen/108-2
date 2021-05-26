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
	
	printf("請輸入一個數字:");
	scanf("%d",&Number);
	printf("您輸入的數字為:%d\n",Number);
	
	printf("輸出:");
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
	printf("\n\n請輸入每月用電量\n");
	scanf("%d", &kwh);
	printf("輸入的用電量%d\n",kwh);
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
	printf("本月電費:%d元",money);
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
	printf("\n\n請輸入兩個數");
	scanf("%d %d", &a, &b);
	printf("輸入:A=%d B=%d\n",a,b);
	printf("輸出:");
	printf("Gcd=%d ",GCD(a, b)); 
    printf("Lcm=%d ",LCM(a, b));
	
}

four()
{
	int D1=0,D5=0,D10=0,money=0;
	float moneyF=0;
	
	printf("\n\n請輸入提領金額");
	scanf("%f", &moneyF);
	money=(int)moneyF;
	while(moneyF != money)
	{
		printf("Error");
		printf("\n請輸入提領金額");
		scanf("%f", &moneyF);
		money=(int)moneyF;
	}
	printf("提領金額=%d",money);
	D10=money/10;
	D5=(money%10)/5;
	D1= (money%10)%5;
	printf("\n輸出:10元%d個 5元%d個 1元%d個",D10,D5,D1);
}
