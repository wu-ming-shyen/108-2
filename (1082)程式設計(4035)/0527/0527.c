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
}student[SIZE],place[SIZE];

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
	int i=0;
	for(i=1;i<=SIZE;i++)
	{
		printf("第%d名 學號:%d 姓名:%s 國文成績:%d 英文成績:%d 數學成績:%d 成績平均:%d\n",
			i,
			place[i].profile.id,
			place[i].profile.name,
			place[i].score.chinese,
			place[i].score.english,
			place[i].score.math,
			place[i].score.average);
	}
}

void sort()
{
	int i=0,j=0;
	for(i=100;i>=1;i--)
	{
		for(j=1;j<=SIZE;j++)
		{
			if(student[j].score.average==i)
			{
				place[j]=student[j];
				
			}
		}
	}
}

void secrch()
{
	int i=0,A=0;
	printf("請輸入一個整數:");
	scanf("%d", &A);
	for(i=1;i<=SIZE;i++)
	{
		if(student[A].score.average==student[i].score.average)
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
	show_sort();
	printf("\n\n\n");
	secrch();
}
