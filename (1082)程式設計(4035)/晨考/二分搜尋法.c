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
}//���ͤ@�Ӥ����ƥB���׬�1000����ư}�C

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
	
	printf("��J�@�Ӭd�ߪ��Ʀr:");
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
	// �I�s�禡�i��j�M
    ans = binarysearch(A, search, sizeof(A) / sizeof(int));
	
    if (ans < 0)
    {
        printf("�䤣�� %d\n", search);
    }
    else
    {
        printf("�b�� %d ����Ƨ�� %d\n", ans + 1, search);
    }
    
	printf("����F%d�� \n",count);
}
