#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Sort(int array[])
{
	
}

int length(char str[ ]) 
{
	
}

main()
{
	srand(time(NULL));
	int i=0,array[5]={0};
	
	for(i=0;i<5;i++)
	{
		array[i]=rand()%1000+1;
		printf("%d ",array[i]);
	}
	return 0;
}
