#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 50
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
}student[M];

void inputId()
{
	int i=0;
	for(i=1;i<=50;i++)
	{
		student[i].profile.id=i;
	}
}

void inputName()
{
	int i=0,j=0;
	for(i=1;i<=50;i++)
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
	for(i=1;i<=50;i++)
	{
		student[i].score.chinese=rand()%100+1;
		student[i].score.english=rand()%100+1;
		student[i].score.math=rand()%100+1;
	}
}

void inputAverage()
{
	int i=0;
	for(i=1;i<=50;i++)
	{
		student[i].score.average=(student[i].score.chinese+student[i].score.english+student[i].score.math)/3;
	}
}

void show()
{
	int i=0;
	for(i=1;i<=50;i++)
	{
		printf("�Ǹ�:%d �m�W:%s ��妨�Z:%d �^�妨�Z:%d �ƾǦ��Z:%d ���Z����:%d\n",
			student[i].profile.id,
			student[i].profile.name,
			student[i].score.chinese,
			student[i].score.english,
			student[i].score.math,
			student[i].score.average);
	}
	
}

void sort()
{
	int i=0,j=0;
	for(i=1;i<=50;i++)
	{
		for(j=1;j<50;j++)
		{
			if(student[j].score.average<student[j+1].score.average)
			{
				struct data temp=student[j];
				student[j]=student[j+1];
				student[j+1]=temp;
			}
		}
	}
}

void secrch()
{
	int i=0,A=0;
	printf("�п�J�@�Ӿ��:");
	scanf("%d", &A);
	for(i=1;i<=50;i++)
	{
		if(student[A].score.average==student[i].score.average)
		{
			printf("�Ǹ�:%d �m�W:%s ��妨�Z:%d �^�妨�Z:%d �ƾǦ��Z:%d ���Z����:%d\n",
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
	show();
	printf("\n\n\n");
	sort();
	show();
	printf("\n\n\n");
	secrch();
}
