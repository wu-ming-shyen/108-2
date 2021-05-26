#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Rand(int Len,int *ArrAddr)
{
	int i=0,j=0;
	srand(time(NULL));
	for(i=0;i<Len;i++)
	{
		do
		{
			ArrAddr[i]=rand()%10000+1;
			for(j=0;j<i && ArrAddr[i]!=ArrAddr[j];j++);
		}while(j!=i);
		if(i%10==0 && i!=0) printf("\n");
		printf("%d ",ArrAddr[i]);
	}
}

void Sort(int Len,int *ArrAddr)
{
	int i=0,j=0;
	
	for(i=0;i<Len-1;i++)
	{
		for(j=0;j<Len-i-1;j++)
		{
			if(ArrAddr[j]>ArrAddr[j+1])
			{
				Swap(&ArrAddr[j],&ArrAddr[j+1]);
			}
		}
	}
	for(i=0;i<Len;i++){
		if(i%10==0 && i!=0) printf("\n");
		printf("%d ",ArrAddr[i]);
	}
}

void Search(int Len,int *ArrAddr)
{
	int low=0,high=Len-1,count=0,anser=0,search=0;
	printf("�п�J���j�M�����: ");
    scanf("%d", &search);
	
	while (low <= high)
	{
		int mid = (low + high) / 2;

        if (ArrAddr[mid] == search)
        {
            anser=mid+1;
            break;
        }
        else if (ArrAddr[mid] > search)
        {
            high = mid - 1;
        }
        else if (ArrAddr[mid] < search)
        {
            low = mid + 1;
        }
        count++;
	}
	if(anser!=0)
	{
		printf("�@���%d���}�C�����Ʀr��\n",count);
		printf("�b�� %d ����Ƨ�� %d\n", anser, search);
	}
	else
	{
		printf("�䤣�� %d\n", search);
	}
}

void Swap(int *A,int *B)
{
	int Temp=0;
	Temp = *A;
	*A = *B;
	*B = Temp;
}

int main()
{
	int Array_Length=0,Array[1000]={0};
	Array_Length=(int)(sizeof(Array)/sizeof(Array[0]));
	Rand(Array_Length,Array);
	printf("\n\n\n");
	Sort(Array_Length,Array);
	printf("\n\n\n");
	Search(Array_Length,Array);
	return 0;
}
