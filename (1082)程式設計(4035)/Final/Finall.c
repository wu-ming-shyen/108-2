#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int SIZE=0,Anser[4]={0},Guess[4]={0};

struct data
{
	char Player_Name[256];//���a�W��
	int Player_Guess_Times;//���a�q������
}Player[256];//�ŧi���c�}�C 

void Game_Name()//��ܹC���W�� 
{
	printf("===1A2B�q�Ʀr�C��===");
}

void Player_Name(SIZE)//��J���a�W�� 
{
	printf("�п�J���a�W��:");
	scanf("%s",&Player[SIZE].Player_Name);
}

void Not_Repeat_Anser()//���ͤ����ƶü�(4���)
{
	int i=0,j=0;
	srand(time(NULL));
	for(i=0;i<4;i++)
	{
		Anser[i]=rand()%10;
		for(j=0;j<i;j++)
		{
			Anser[j]==Anser[i]&&i--;
		}
	}
	for(i=0;i<4;i++)
	{
		printf("%d",Anser[i]);
	}
}

void Game_Start(SIZE)//�C���}�l
{
	int A=0,B=0,i=0,j=0;
	printf("�z�n:%s",Player[SIZE].Player_Name);
	printf("\n");
	Not_Repeat_Anser();//���ͤ����ƶü�(4���)
	printf("\n");
	do
	{
		Player[SIZE].Player_Guess_Times++;
		A=0;
		B=0;
		do
		{
			printf("�п�J�|��Ʀr���q��(�N�|�ӼƦr���Ů�j�}):");
			scanf("%d %d %d %d",&Guess[0],&Guess[1],&Guess[2],&Guess[3]);
		}while(Guess[0]>=10||Guess[1]>=10||Guess[2]>=10||Guess[3]>=10);
		
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				if(Guess[i]==Anser[j]&&i==j)
				{
					A++;
				}
				if(Guess[i]==Anser[j]&&i!=j)
				{
					B++;
				}
			}
		}
		printf("%dA%dB\n",A,B);
	}while(A!=4);
	
	printf("����A�A�q�F%d��",Player[SIZE].Player_Guess_Times);
} 

void sort()
{
	int i=0,j=0;
	for(i=1;i<=SIZE;i++)
	{
		for(j=1;j<SIZE;j++)
		{
			if(Player[j].Player_Guess_Times>Player[j+1].Player_Guess_Times)
			{
				struct data temp=Player[j];
				Player[j]=Player[j+1];
				Player[j+1]=temp;
			}
		}
	}
}

void Show()
{
	int i=0;
	for(i=0;i<SIZE;i++)
	{
		printf("��%d�W ���a�W��:%s �q������:%d\n",i+1,Player[i].Player_Name,Player[i].Player_Guess_Times);
	}
}

void main()
{
	while(1)
	{
		SIZE++;
		Game_Name(SIZE);//��ܹC���W�� 
		printf("\n");
		Player_Name(SIZE);//��J���a�W�� 
		printf("\n");
		Game_Start(SIZE);//�C���}�l
		printf("\n");
		Show(SIZE);
		printf("\n");
	}
	
}
