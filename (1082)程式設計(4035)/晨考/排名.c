#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sort[15]={5,5,5,5,5,4,4,4,4,3,3,3,2,2,1};
	
	
	int search=0;
	printf("input an interger:");
	scanf("%d",&search);
	
	int min=0,mid=0,max=15,rank=0;
	while(min<=max)
	{
		mid=(min+max)/2;
		if(sort[mid]==search)//二分搜尋法(找到數字時) 
		{
			while(sort[mid]==sort[mid-1]&&mid>0)//往前找是否有相同的數值 
			{
				mid--;
			}
			rank=mid;
			
			do
			{
				printf("第%d名 sort[%d]=%d\n",rank+1,mid,sort[mid]); 
				mid++;
				if(sort[mid]!=sort[mid+1]&&mid<15)//向後找不同的數值 
				{
					printf("第%d名 sort[%d]=%d\n",rank+1,mid,sort[mid]);
				}
			}while(sort[mid]==sort[mid+1]&&mid<15);
			
			break;
		}
		else if(sort[mid]>search)
		{
			min=mid+1;
		} 
		else if(sort[mid]<search)
		{
			max=mid-1;
		}
	}
	return 0;
}
