#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	
	
	float x=0,y=0;
	printf("\n請輸入X軸座標:");
	scanf("%f", &x);
	printf("\n請輸入Y軸座標:");
	scanf("%f", &y);
	
	printf("\n您所輸入的座標為(%.3f,%.3f)\n",x,y);
	
	if(x==0 || y==0)
	{
		if(x!=0 && y==0)
		{printf("\n此座標位於X軸上");}
		else if(x==0 && y!=0)
		{printf("\n此座標位於Y軸上");}
		else
		{printf("\n此座標位於原點上");}
	}
	else
	{
		if(x>0 && y>0)
		{printf("\n此座標位於第一象限");}
		else if(x<0 && y>0)
		{printf("\n此座標位於第二象限");}
		else if(x<0 && y<0)
		{printf("\n此座標位於第三象限");}
		else 
		{printf("\n此座標位於第四象限");}
	}
	
	
	float Kg=0,Money=0;
	
	printf("\n\n\n請輸入您的購物重量:");
	scanf("%f", &Kg);
	
	printf("\n您所購物的重量:%f\n",Kg);
	/*
	if(Kg>5)
	{
		Money=199+5*50+(Kg-5)*30;
	}
	else
	{
		Money=199+Kg*50;
	}
	*/
	switch
	{
		
	}
	
	printf("\n您的運費總額為:%f\n",Money);
	
	return 0;
}
