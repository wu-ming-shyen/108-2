#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	
	
	float x=0,y=0;
	printf("\n�п�JX�b�y��:");
	scanf("%f", &x);
	printf("\n�п�JY�b�y��:");
	scanf("%f", &y);
	
	printf("\n�z�ҿ�J���y�Ь�(%.3f,%.3f)\n",x,y);
	
	if(x==0 || y==0)
	{
		if(x!=0 && y==0)
		{printf("\n���y�Ц��X�b�W");}
		else if(x==0 && y!=0)
		{printf("\n���y�Ц��Y�b�W");}
		else
		{printf("\n���y�Ц����I�W");}
	}
	else
	{
		if(x>0 && y>0)
		{printf("\n���y�Ц��Ĥ@�H��");}
		else if(x<0 && y>0)
		{printf("\n���y�Ц��ĤG�H��");}
		else if(x<0 && y<0)
		{printf("\n���y�Ц��ĤT�H��");}
		else 
		{printf("\n���y�Ц��ĥ|�H��");}
	}
	
	
	float Kg=0,Money=0;
	
	printf("\n\n\n�п�J�z���ʪ����q:");
	scanf("%f", &Kg);
	
	printf("\n�z���ʪ������q:%f\n",Kg);
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
	
	printf("\n�z���B�O�`�B��:%f\n",Money);
	
	return 0;
}
