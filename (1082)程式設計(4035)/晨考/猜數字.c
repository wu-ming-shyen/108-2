#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Anser[4]={0},Guess[4]={0},count=0;

struct node
{
	char Player_Name[256];//玩家名稱
	int Player_Rank;
	int Player_Guess_Times;//玩家猜的次數
	struct node *next;
}*first,*current,*previous,*head,*temp,*before;

void Start()//歡迎來到1A2B小遊戲 
{
	printf("===== Welcome 1A2B Game! =====\n");
}

void New_current()//產生新的玩家記憶體空間 
{
	current=(struct node *)malloc(sizeof(struct node));
	current->Player_Guess_Times=0;
}

void Input_Player_Name()//輸入玩家姓名 
{
	printf("請輸入玩家名稱:");
	scanf("%s",&current->Player_Name);
}

void Not_Repeat_Anser()//產生不重複亂數(0~9的4位數)
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

void Game_Start()//遊戲開始
{
	int guess=0,A=0,B=0,i=0,j=0;
	printf("您好:%s",current->Player_Name);
	printf("\n");
	Not_Repeat_Anser();//產生不重複亂數(0~9的4位數)
	printf("\n");
	do
	{
		current->Player_Guess_Times++;
		A=0;
		B=0;
		do
		{
			printf("請輸入四位數字的猜測:");
			scanf("%d",&guess);
			Guess[0]=guess/1000;
			Guess[1]=guess%1000/100;
			Guess[2]=guess%100/10;
			Guess[3]=guess%10;
		}while(Guess[0]>=10||Guess[1]>=10||Guess[2]>=10||Guess[3]>=10);
		
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				if(Guess[i]==Anser[j] && i==j)
				{
					A++;
				}
				if(Guess[i]==Anser[j] && i!=j)
				{
					B++;
				}
			}
		}
		printf("%dA%dB\n",A,B);
	}while(A!=4);
	
	printf("答對，你猜了%d次",current->Player_Guess_Times);
}

void Node_Change()//設定指標 
{
	if(count==1)
	{
		first=current;
		previous=current;
		current->next=NULL;
	}
	else
	{
		temp=previous;
		previous->next=current;
		current->next=NULL;
		previous=current;
	}
}

void Sort()//排序 
{
	head=first;
	while(head->next!=NULL && count!=1)
	{
		if(head->Player_Guess_Times>=current->Player_Guess_Times)
		{
			if(head==first)
			{
				temp->next=NULL;
				previous=temp;
				current->next=first;
				first=current;
				break;
			}
			else
			{
				temp->next=NULL;
				previous=temp;
				current->next=head;
				before->next=current;
				break;
			}
		}
		before=head;
		head=head->next;
	}
}

void Rank()//排名 
{
	
}

void Show_Rank()
{
	int rank=0;
	printf("=====排行榜=====\n");
	head=first;
	while(head!=NULL)
	{
		rank++;
		if(rank<=10)
		{
			printf("第%d名 玩家名稱:%s 猜測次數:%d\n",rank,head->Player_Name,head->Player_Guess_Times);
			head=head->next;
		}
		else
		{
			break;
		}
	}
}

int main()
{
	while(1)
	{
		count++;
		Start();
		printf("\n");
		New_current();
		printf("\n");
		Input_Player_Name();
		printf("\n");
		Game_Start();
		printf("\n");
		Node_Change();
		printf("\n");
		Sort();
		printf("\n");
		Rank();
		printf("\n");
		Show_Rank();
		printf("\n");
	}
	return 0;
}
