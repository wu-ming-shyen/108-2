#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i=0,j=0,i_min=0,j_min=0;
	char array[2][3]={0};
	srand(time(NULL));
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			array[i][j]=rand()%91+10;
			printf("%d ",array[i][j]);
			if(array[i_min][j_min]>array[i][j])
			{
				i_min=i;
				j_min=j;
			}
		}
		printf("\n");
	}
	printf("³Ì¤p­È®y¼Ð(%d,%d)",i_min,j_min);
	return 0;
}
