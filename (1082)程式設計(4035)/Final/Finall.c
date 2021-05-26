#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int SIZE=0,Anser[4]={0},Guess[4]={0};

struct data
{
	char Player_Name[256];//玩家名稱
	int Player_Guess_Times;//玩家猜的次數
}Player[256];//宣告結構陣列 

void Game_Name()//顯示遊戲名稱 
{
	printf("===1A2B猜數字遊戲===");
}

void Player_Name(SIZE)//輸入玩家名稱 
{
	printf("請輸入玩家名稱:");
	scanf("%s",&Player[SIZE].Player_Name);
}

void Not_Repeat_Anser()//產生不重複亂數(4位數)
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

void Game_Start(SIZE)//遊戲開始
{
	int A=0,B=0,i=0,j=0;
	printf("您好:%s",Player[SIZE].Player_Name);
	printf("\n");
	Not_Repeat_Anser();//產生不重複亂數(4位數)
	printf("\n");
	do
	{
		Player[SIZE].Player_Guess_Times++;
		A=0;
		B=0;
		do
		{
			printf("請輸入四位數字的猜測(將四個數字間空格隔開):");
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
	
	printf("答對，你猜了%d次",Player[SIZE].Player_Guess_Times);
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
		printf("第%d名 玩家名稱:%s 猜測次數:%d\n",i+1,Player[i].Player_Name,Player[i].Player_Guess_Times);
	}
}

void main()
{
	while(1)
	{
		SIZE++;
		Game_Name(SIZE);//顯示遊戲名稱 
		printf("\n");
		Player_Name(SIZE);//輸入玩家名稱 
		printf("\n");
		Game_Start(SIZE);//遊戲開始
		printf("\n");
		Show(SIZE);
		printf("\n");
	}
	
}
