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
	int Int_Printf=0,Int=0,i=0;
	
	printf("請輸入一個不多於5位數的正整數:");
	scanf("%d", &Int);
	printf("您輸入的整數為:%d\n",Int);
	
	Int_Printf=Int;
    while(Int != 0)
    {
        Int /= 10;// n = n/10
        ++i;
    }
    printf("輸入:%d，輸出:%d位數\n",Int_Printf,i);
}
