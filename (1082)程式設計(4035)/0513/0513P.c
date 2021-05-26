#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	srand(time(NULL));
	int i=0,j=0;
	struct score
	{
		int ID;
		int Math;
		int Chinese;
		int Average;
	};
	
	struct score student[50];
	for(i=1;i<=50;i++)
	{
		
		student[i-1].ID=i;
		student[i-1].Math=rand()%100+1;
		student[i-1].Chinese=rand()%100+1;
		student[i-1].Average=(student[i-1].Math+student[i-1].Chinese)/2;
		printf("%d %d %d %d\n",student[i-1].ID,student[i-1].Math,student[i-1].Chinese,student[i-1].Average);
	}
	
	printf("\n\n\n");
	
	for(i=0;i<50;i++)
	{
		for(j=0;j<50;j++)
		{
			if(student[j].Average<student[j+1].Average)
			{
				struct score temp;
				temp=student[j];
				student[j]=student[j+1];
				student[j+1]=temp;
			}
		}
	}
	
	for(i=1;i<=10;i++)
	{
		
		printf("%d %d %d %d\n",student[i-1].ID,student[i-1].Math,student[i-1].Chinese,student[i-1].Average);
	}
	
	return 0;
}
