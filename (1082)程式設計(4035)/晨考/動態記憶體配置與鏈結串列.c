#include <time.h> 
#include <stdio.h>
#include <stdlib.h>



int main()
{
	srand(time(NULL));
	
	struct node
	{
		int id;
		int data;
		struct node *next;
	}*ptr=0,*news=0,*pre=0;
	
	int num=0;
	printf("輸入需要的空間:");
	scanf("%d",&num);
	
	int i=0;
	for(i=0;i<num;i++)
	{
		news=(struct node *)malloc(sizeof(struct node));
		news->id=i+1;
		news->data=rand()%100+1;
		printf("news->id:%d news->data:%d\n",news->id,news->data);
		if(i==0)
		{
			ptr=news;
			pre=news;
		}
		else
		{
			pre->next=news;
			news->next=NULL;
			pre=news;
		}
	}
	news=ptr;
	pre=ptr;
	while(news!=NULL)
	{
		printf("news->id:%d news->data:%d news->next:%p\n",news->id,news->data,news->next);
		if(news->next->id==2)
		{
			news->next=news->next->next;
		}
		news=news->next;
	}
	return 0;
}
