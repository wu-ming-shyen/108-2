#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main()
{
	srand(time(NULL));
	int i=0,j=0,l=0,array[3][3],total[3];
	float average[3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			array[i][j]=(rand()%50)+1;
			printf("%d ",array[i][j]);
			total[i]+=array[i][j];
			average[i]=(total[i]/3.);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		printf("第%d行:%d 平均:%f\n",i+1,total[i],average[i]);
	}
	printf("對角線:%d %d",array[0][0]+array[1][1]+array[2][2],array[0][2]+array[1][1]+array[2][0]);
	return 0;
}
