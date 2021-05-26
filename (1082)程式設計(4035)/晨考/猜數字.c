#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Anser[4]={0},Guess[4]={0},count=0;

struct node
{
	char Player_Name[256];//���a�W��
	int Player_Rank;
	int Player_Guess_Times;//���a�q������
	struct node *next;
}*first,*current,*previous,*head,*temp,*before;

void Start()//�w��Ө�1A2B�p�C�� 
{
	printf("===== Welcome 1A2B Game! =====\n");
}

void New_current()//���ͷs�����a�O����Ŷ� 
{
	current=(struct node *)malloc(sizeof(struct node));
	current->Player_Guess_Times=0;
}

void Input_Player_Name()//��J���a�m�W 
{
	printf("�п�J���a�W��:");
	scanf("%s",&current->Player_Name);
}

void Not_Repeat_Anser()//���ͤ����ƶü�(0~9��4���)
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

void Game_Start()//�C���}�l
{
	int guess=0,A=0,B=0,i=0,j=0;
	printf("�z�n:%s",current->Player_Name);
	printf("\n");
	Not_Repeat_Anser();//���ͤ����ƶü�(0~9��4���)
	printf("\n");
	do
	{
		current->Player_Guess_Times++;
		A=0;
		B=0;
		do
		{
			printf("�п�J�|��Ʀr���q��:");
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
	
	printf("����A�A�q�F%d��",current->Player_Guess_Times);
}

void Node_Change()//�]�w���� 
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

void Sort()//�Ƨ� 
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

void Rank()//�ƦW 
{
	
}

void Show_Rank()
{
	int rank=0;
	printf("=====�Ʀ�]=====\n");
	head=first;
	while(head!=NULL)
	{
		rank++;
		if(rank<=10)
		{
			printf("��%d�W ���a�W��:%s �q������:%d\n",rank,head->Player_Name,head->Player_Guess_Times);
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
