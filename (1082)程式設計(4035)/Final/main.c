#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i=0,j=0;
int Anser[4]={0};
/*
struct data
{
	char Player_Name[256];//玩家名稱 
	int Player_Guess_Times;//玩家猜的次數 
	int Player_Use_Times;//玩家使用的時間 
}Player[256];

void Game_Name()//顯示遊戲名稱 
{
	printf("1A2B猜數字遊戲");
}

void Player_Name()//輸入玩家名稱 
{
	printf("請輸入玩家名稱:");
	scanf("%s",Player[0].Player_Name);
}

void Game_Start()//遊戲開始 
{
	printf("您好:%s",Player[0].Player_Name);
	
	char cn[5]="",un[5]=""; //cn:電腦數字, un:玩家猜的數字
    int i,j,na,nb,times=10;
    srand(time(NULL));

    puts("===猜數字遊戲===\n\n\n請輸入四位數字:(例如2178)");
    for(i=0;i<4&&(cn[i]=rand()%10+48);i++) //產生電腦數字
        for(j=0;j<i;j++) cn[j]==cn[i]&&i--; //檢查重複
    do{
        na=nb=i=scanf("%4s",un)&0; fflush(stdin);
        for(;i<4;i++) for(j=0;j<4;j++) un[i]==cn[j]&&(i==j?na++:nb++); //計算幾A幾B
        na-4&&--times&&printf("結果：%dA%dB，還有%d次機會...\n", na,nb,times);
    }while(na-4&&times); //迴圈猜times次
    na==4?puts("您猜對了！"):printf("失敗，猜超過10次，答案是%s\n",cn);
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
