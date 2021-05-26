#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char Name[5][128]={{},{},{},{},{}};
	
	float Height[5]={0.0,0.0,0.0,0.0,0.0};
	
	float Weight[5]={0.0,0.0,0.0,0.0,0.0};
	
	float Height_Average=0,Height_Tatal=0,Weight_Average=0,Weight_Tatal=0;
	
	int i=0;
	
	for(i=1;i<=4;i++)
	{
		printf("\n請輸入第 %d 位使用者的姓名:",i);
		scanf("%s",&Name[i]);
		
		printf("\n請輸入第 %d 位使用者的身高:",i);
		scanf("%f",&Height[i]);
		Height_Tatal=Height_Tatal+Height[i];
		
		printf("\n請輸入第 %d 位使用者的體重:",i);
		scanf("%f",&Weight[i]);
		Weight_Tatal=Weight_Tatal+Weight[i];
	}
	
	Height_Average = Height_Tatal/4;
	Weight_Average = Weight_Tatal/4;
	
	for (i=1;i<=4;i++)
	{
		printf("\n第 %d 位使用者的姓名:%s",i,Name[i]);
	}
	
	printf("\n\n4位平均身高:%f\n4位平均體重:%f\n ",Height_Average,Weight_Average);
	
	return 0;
}
