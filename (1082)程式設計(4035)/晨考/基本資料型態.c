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
		printf("\n�п�J�� %d ��ϥΪ̪��m�W:",i);
		scanf("%s",&Name[i]);
		
		printf("\n�п�J�� %d ��ϥΪ̪�����:",i);
		scanf("%f",&Height[i]);
		Height_Tatal=Height_Tatal+Height[i];
		
		printf("\n�п�J�� %d ��ϥΪ̪��魫:",i);
		scanf("%f",&Weight[i]);
		Weight_Tatal=Weight_Tatal+Weight[i];
	}
	
	Height_Average = Height_Tatal/4;
	Weight_Average = Weight_Tatal/4;
	
	for (i=1;i<=4;i++)
	{
		printf("\n�� %d ��ϥΪ̪��m�W:%s",i,Name[i]);
	}
	
	printf("\n\n4�쥭������:%f\n4�쥭���魫:%f\n ",Height_Average,Weight_Average);
	
	return 0;
}
