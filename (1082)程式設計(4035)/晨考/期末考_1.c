#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

_1()
{
	int i=0,X=0,Y=0,R=0,num=0,count=0;
	do
	{
		printf("隨機輸入一串數字，此數字需 > 999:");
		scanf("%d", &num);
	}while(num<=999);
	printf("輸入:%d\n",num);
	R=num;
	Y=(num/10)%10;
	while(num!=0)
    {
        num/=10;
        ++count;
    }
    for(i=0;i<count-2;i++)
    {
    	R/=10;
	}
	X=R%10;
	printf("%dX%d=%d",X,Y,X*Y);
}

Sort(int len,int arr[])
{
	int i=0,j=0,temp=0;
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
_2()
{
	int i=0,arr[5]={0},len=sizeof(arr)/sizeof(arr[0]);
	printf("請輸入5個數字:");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("%d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
	printf("\n");
	Sort(len,arr);
	printf("%d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
}
_3()
{
	int i=0,j=0,arr[10];
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		do
		{
			arr[i]=rand()%100+1;
		}while(arr[i]==100);
		for(j=0;j<i;j++)
		{
			arr[j]==arr[i]&&i--;
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
}

struct data
{
	int id;
	int chinese;
	int english;
	float average;
}student[150],temp;
Struct_Sort(int len)
{
	int i=0,j=0;
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1;j++)
		{
			if(student[j].average<student[j+1].average)
			{
				temp=student[j];
				student[j]=student[j+1];
				student[j+1]=temp;
			}
		}
	}
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1;j++)
		{
			if(student[j].average==student[j+1].average && student[j].chinese<student[j+1].chinese)
			{
				temp=student[j];
				student[j]=student[j+1];
				student[j+1]=temp;
			}
		}
	}
}
Struct_Show(len)
{
	int i=0;
	for(i=0;i<len;i++)
	{
		printf("student[i].id:%d student[i].chinese:%d student[i].english:%d student[i].average:%.3f\n",student[i].id,student[i].chinese,student[i].english,student[i].average);
	}
}
_4()
{
	int i=0,find=0,len=sizeof(student)/sizeof(student[0]);
	for(i=0;i<len;i++)
	{
		student[i].id=i+1;
		do
		{
			student[i].chinese=rand()%100+1;	
		}while(student[i].chinese<90);
		do
		{
			student[i].english=rand()%100+1;
		}while(student[i].english<90);
		student[i].average=((float)student[i].chinese+(float)student[i].english)/2;
	}
	Struct_Show(len);
	printf("\n");
	Struct_Sort(len);
	Struct_Show(len);
	do
	{
		printf("請輸入欲查詢的平均分數:");
		scanf("%d", &find);
		if(find!=0)
		{
			for(i=0;i<len;i++)
			{
				if(student[i].average>find)
				{
					printf("student[i].id:%d student[i].chinese:%d student[i].english:%d student[i].average:%.3f\n",student[i].id,student[i].chinese,student[i].english,student[i].average);
				}
			}
		}
	}while(find!=0);
}

int main()
{
	_1();
	//printf("\n");
	//_2();
	//printf("\n");
	//_3();
	//printf("\n");
	//_4();
	//printf("\n");
	return 0;
}
