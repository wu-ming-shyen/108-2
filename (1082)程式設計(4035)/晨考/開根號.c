#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int SQRT(Number)
{
	return sqrt(Number);
}

 int main()
{
	int Number=0;
	printf("Please input a number.");
	scanf("%d", &Number);
	printf("input:%d      ",Number);
	printf("output:%d",SQRT(Number));
	return 0;
}
