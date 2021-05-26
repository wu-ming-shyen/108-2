#include <stdio.h>
#include <stdlib.h>
#define MAX 80
struct node
{
	int id;
	int data;
	struct node *next;
}*first,*current,*previous,*head;

void b_sort()
{
	int i=previous->id,tempId=0,tempData=0;
	while(i>=0)
	{
		head=first;
		while(head->next)
		{
			if(head->data<head->next->data)
			{
				tempId=head->next->id;
				tempData=head->next->data;
				head->next->id=head->id;
				head->next->data=head->data;
				head->id=tempId;
				head->data=tempData;
			}
			head=head->next;
		}
		i--;
	}
}

int main(){
	
	FILE *fptr;
	char str[MAX];
	int bytes=0,intData=0,count=0;
	fptr=fopen("test.txt","rw");
	if(fptr!=NULL)
	{
		while(!feof(fptr))
		{
			bytes=fgets(str,MAX,fptr);
			intData=atoi(str);
			count++;
			current=(struct node *)malloc(sizeof(struct node));
			current->id=count;
			current->data=intData;
			if(count==1)
			{
				first=current;
				previous=current;
			}
			else
			{
				previous->next=current;
				current->next=NULL;
				previous=current;
			}
		}
		
		fclose(fptr);
	}
	else
	{
		printf("error");
	}
	head=first;
	while(head!=NULL)
	{
		printf("head->id:%d head->data:%d \n",head->id,head->data);
		head=head->next;
	}
	printf("\n");
	b_sort();
	head=first;
	while(head!=NULL)
	{
		printf("head->id:%d head->data:%d \n",head->id,head->data);
		head=head->next;
	}
	return 0;
}
