#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f(int n)
{
	if(n==0)
	{
		return 3;
	}
	return 2*f(n-1)-5;
}
_1()
{
	int n=0;
	printf("請輸入一個整數:");
	scanf("%d", &n);
	printf("n=%d\n",n);
	
	printf("f(%d)=%d",n,f(n));
}

int GCD(int a, int b)
{
	if(b)
	{
		while((a%=b)&&(b%=a));
	}
	return a+b;
}	
int LCM(int a, int b) {
	return a*b/GCD(a,b);
}
_2()
{
	
	int a=0,b=0;
	printf("請輸入兩個整數");
	scanf("%d %d", &a, &b);
	printf("輸入:A=%d B=%d\n",a,b);
	printf("輸出:");
	printf("Gcd=%d ",GCD(a, b)); 
    printf("Lcm=%d ",LCM(a, b));
}

Sort(int len,int arr[])
{
	int i=0,j=0,temp=0;
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
Show(int len,int arr[])
{
	int i=0;
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
}	
_3()
{
	int i=0,arr[5]={0},len=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<len;i++)
	{
		arr[i]=rand()%1000+1;
	}
	Show(len,arr);
	printf("\n");
	Sort(len,arr);
	Show(len,arr);
}

struct data
{
	int id;
	int chinese;
	int english;
	int average;
}student[50],temp;
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
}
_4()
{
	int i=0,len=sizeof(student)/sizeof(student[0]);
	for(i=0;i<len;i++)
	{
		student[i].id=i;
		student[i].chinese=rand()%100+1;
		student[i].english=rand()%100+1;
		student[i].average=(student[i].chinese+student[i].english)/2;
	}
	Struct_Sort(len);
	for(i=0;i<10;i++)
	{
		printf("student[i].id:%d student[i].chinese:%d student[i].english:%d student[i].average:%d\n",student[i].id,student[i].chinese,student[i].english,student[i].average);
	}
}

struct node {
	int id;
	int data;
	struct node *next;
};
_5()
{
	
}

_6()
{
	
}

_7()
{
	
}

_8()
{
	
}

int main()
{
	srand(time(NULL));
/*	_1();
	printf("\n");
	_2();
	printf("\n");
	_3();
	printf("\n");
*/	_4();
	printf("\n");
	_5();
	printf("\n");
	_6();
	printf("\n");
	_7();
	printf("\n");
	_8();
	printf("\n");
	return 0;
}
