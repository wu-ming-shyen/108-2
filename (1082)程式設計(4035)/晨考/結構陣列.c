#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50
#define len(x) sizeof(x)/sizeof(x[0])

struct data
{
	struct profile
	{
		int id;
		char name[9];
	}profile;
	struct score
	{
		int average;
		int chinese;
		int english;
		int math;
	}score;
}student[SIZE];

int place[SIZE]={0};

void inputId()
{
	int i=0;
	for(i=1;i<=SIZE;i++)
	{
		student[i].profile.id=i;
	}
}

void inputName()
{
	int i=0,j=0;
	for(i=1;i<=SIZE;i++)
	{
		student[i].profile.name[0]='A'+rand()%26;
		for(j=1;j<8;j++)
		{
			student[i].profile.name[j]='a'+rand()%26;
		}
	}
}

void inputScore()
{
	int i=0;
	for(i=1;i<=SIZE;i++)
	{
		student[i].score.chinese=rand()%100+1;
		student[i].score.english=rand()%100+1;
		student[i].score.math=rand()%100+1;
	}
}

void inputAverage()
{
	int i=0;
	for(i=1;i<=SIZE;i++)
	{
		student[i].score.average=(student[i].score.chinese+student[i].score.english+student[i].score.math)/3;
	}
}

void show_source()
{
	int i=0;
	for(i=1;i<=SIZE;i++)
	{
		printf("學號:%d 姓名:%s 國文成績:%d 英文成績:%d 數學成績:%d 成績平均:%d\n",
			student[i].profile.id,
			student[i].profile.name,
			student[i].score.chinese,
			student[i].score.english,
			student[i].score.math,
			student[i].score.average);
	}
}

void show_sort()
{
	int i=0,same=0;
	for(i=1,same=1;i<=SIZE,same<=SIZE;i++,same++)
	{
		printf("第%d名 學號:%d 姓名:%s 國文成績:%d 英文成績:%d 數學成績:%d 成績平均:%d\n",
			same,
			student[place[i]].profile.id,
			student[place[i]].profile.name,
			student[place[i]].score.chinese,
			student[place[i]].score.english,
			student[place[i]].score.math,
			student[place[i]].score.average);
	}
	
}

void sort()
{
	int i=0,j=0;
	for(i=1;i<=SIZE;i++)
	{
		place[i]=i;
	}
	for(i=1;i<=SIZE;i++)
	{
		for(j=1;j<=SIZE-i;j++)
		{
			if(student[place[j]].score.average<student[place[j+1]].score.average)
			{
				int temp=place[j];
				place[j]=place[j+1];
				place[j+1]=temp;
			}
		}
	}
}

void secrch()
{
	int i=0,min=1,max=SIZE,mid=0,search=0;
	printf("請輸入一個整數:");
	scanf("%d", &search);
	while(min<=max)
	{
		mid=(min+max)/2;
		if(student[place[mid]].score.average==search)
		{
			printf("學號:%d 姓名:%s 國文成績:%d 英文成績:%d 數學成績:%d 成績平均:%d\n",
			student[place[mid]].profile.id,
			student[place[mid]].profile.name,
			student[place[mid]].score.chinese,
			student[place[mid]].score.english,
			student[place[mid]].score.math,
			student[place[mid]].score.average);
			break;
		}
		else if(student[place[mid]].score.average>search)
		{
			min=mid+1;
		}
		else if(student[place[mid]].score.average<search)
		{
			max=mid-1;
		}
	}
}

void main()
{
	srand(time(NULL));
	inputId();
	inputName();
	inputScore();
	inputAverage();
	show_source();
	printf("\n\n\n");
	sort();
	printf("\n\n\n");
	show_sort();
	printf("\n\n\n");
	secrch();
}
