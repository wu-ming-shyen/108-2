#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
/*
Rand(){
	int i=0,j=0,A[1000]={0};
	srand(time(NULL));
	for(i=1;i<1000;i++){
		do{
			A[i-1]=rand()%10000+1;
			for(j=1;j<i;j++){
				if(A[i-1]==A[j-1]){
					break;
				}
			}
		}while(j!=i);
		printf("%d ",A[i-1]);
	}
	printf("\n");
}//產生一個不重複且長度為1000的整數陣列

Sort(){
	int i=0,j=0;
	for(i=0;i<1000;i++){
		for(j=0;j<1000-i;j++){
			if(A[j]>A[j+1]){
				int t=A[j];
				A[j]=A[j+1];
				A[j+1]=t;
			}
		}
	}
	for(i=0;i<1000;i++){
		printf("%d ",A[i]);
	}
}

int length(){
	char str[20];
	printf("Input a string:");
	gets(str);
	printf("%s(%d)",str,strlen(str));
}
*/
int count=0;
main(){
	int i=0,j=0,ans=0,count=0,search=0,A[1000]={0};
	srand(time(NULL));
	for(i=1;i<1000;i++){
		do{
			A[i-1]=rand()%10000+1;
			for(j=1;j<i;j++){
				if(A[i-1]==A[j-1]){
					break;
				}
			}
		}while(j!=i);
		printf("%d ",A[i-1]);
		if(i%10==0) printf("\n");
	}
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	for(i=0;i<1000;i++){
		for(j=0;j<1000-i;j++){
			if(A[j]>A[j+1]){
				int t=A[j];
				A[j]=A[j+1];
				A[j+1]=t;
			}
		}
	}
	for(i=0;i<1000;i++){
		printf("%d ",A[i]);
		if(i%10==0) printf("\n");
	}
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	printf("輸入一個查詢的數字:");
	scanf("%d", &search);
	
	int binarysearch(int A[], int search, int n)
	{
	    int low = 0, high = n - 1;
		
	    while (low <= high)
	    {
	        count++;
			int mid = (low + high) / 2;
			
	        if (A[mid] == search)
	        {
	            return mid;
	        }
	        else if (A[mid] > search)
	        {
	            high = mid - 1;
	        }
	        else if (A[mid] < search)
	        {
	            low = mid + 1;
	        }
	    }
	
	    return -1;
	}
	// 呼叫函式進行搜尋
    ans = binarysearch(A, search, sizeof(A) / sizeof(int));
	
    if (ans < 0)
    {
        printf("找不到 %d\n", search);
    }
    else
    {
        printf("在第 %d 筆資料找到 %d\n", ans + 1, search);
    }
    
	printf("比較了%d次 \n",count);
}
