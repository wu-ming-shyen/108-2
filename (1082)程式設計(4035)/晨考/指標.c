#include <stdio.h>
#include <stdlib.h>

void addTen (int *valueOne, int *valueTwo)
{
	int temp=*valueOne+10;
	*valueOne=*valueTwo+10;
	*valueTwo=temp;
}

int main()
{
	int A=100,B=10;
	printf("A=%d B=%d\n",A,B);
	addTen(&A,&B);
	printf("A=%d B=%d\n",A,B);
	return 0;
}
