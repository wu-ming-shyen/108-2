#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 80

int GCD(int a, int b)
{
	if (b)
	{
		while((a %= b) && (b %= a));
	}
	return a + b;
}
_1()
{
	int n=0,m=0;
	printf("請輸入分式的分子及分母:");
	scanf("%d %d", &n, &m);
	printf("%d %d",n/GCD(n,m),m/GCD(n,m));
}

_2()
{
	int i=0,j=0,n=0;
	do{
		printf("請輸入數字:");
		scanf("%d", &n);
	}while(n<1 || n>50);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(j=n-i;j>0;j--)
		{
			printf("*");
		}
		
		printf("\n");
	}
}

_3()
{
	srand(time(NULL));
	int i=0,j=0,arr[3][3]={0},col[3]={0};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arr[i][j]=rand()%50+1;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
			col[i]+=arr[i][j];
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		printf("第%d列 總和:%d 平均:%.3f\n",i+1,col[i],(float)col[i]/3);
	}
	printf("對角線:%d,%d",arr[0][0]+arr[1][1]+arr[2][2],arr[0][2]+arr[1][1]+arr[2][0]);
}

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
_4()
{
	FILE *fptr;
	char str[MAX];
	int bytes=0,intData=0,count=0;
	fptr=fopen("test.txt","r");
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
	
	b_sort();
	
	fptr=fopen("out.txt","w");
	head=first;
	while(head!=NULL)
	{
		fprintf(fptr,"%d,%d \n",head->id,head->data);
		head=head->next;
	}
	fclose(fptr);
}

int main(){
	_1();
	//_2();
	//_3();
	//_4();
	return 0;
}
