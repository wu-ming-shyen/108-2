#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i=0,j=0;
int Anser[4]={0};
/*
struct data
{
	char Player_Name[256];//���a�W�� 
	int Player_Guess_Times;//���a�q������ 
	int Player_Use_Times;//���a�ϥΪ��ɶ� 
}Player[256];

void Game_Name()//��ܹC���W�� 
{
	printf("1A2B�q�Ʀr�C��");
}

void Player_Name()//��J���a�W�� 
{
	printf("�п�J���a�W��:");
	scanf("%s",Player[0].Player_Name);
}

void Game_Start()//�C���}�l 
{
	printf("�z�n:%s",Player[0].Player_Name);
	
	char cn[5]="",un[5]=""; //cn:�q���Ʀr, un:���a�q���Ʀr
    int i,j,na,nb,times=10;
    srand(time(NULL));

    puts("===�q�Ʀr�C��===\n\n\n�п�J�|��Ʀr:(�Ҧp2178)");
    for(i=0;i<4&&(cn[i]=rand()%10+48);i++) //���͹q���Ʀr
        for(j=0;j<i;j++) cn[j]==cn[i]&&i--; //�ˬd����
    do{
        na=nb=i=scanf("%4s",un)&0; fflush(stdin);
        for(;i<4;i++) for(j=0;j<4;j++) un[i]==cn[j]&&(i==j?na++:nb++); //�p��XA�XB
        na-4&&--times&&printf("���G�G%dA%dB�A�٦�%d�����|...\n", na,nb,times);
    }while(na-4&&times); //�j��qtimes��
    na==4?puts("�z�q��F�I"):printf("���ѡA�q�W�L10���A���׬O%s\n",cn);
    return system("pause");

}
*/
void Not_Repeat_Anser()
{
	srand(time(NULL));
	
	for(i=0;i<4;i++)
	{
		Anser[i]=rand()%10;
		for(j=0;j<i;j++)
		{
			Anser[j]==Anser[i]&&i--;
		}
	}
}

int main(int argc, char *argv[])
{
	/*
	Game_Name();
	printf("\n\n\n");
	Player_Name();
	printf("\n\n\n");
	*/
	A();
	for(i=0;i<4;i++)
	{
		printf("%d ",Anser[i]);
	}
	return 0;
}
