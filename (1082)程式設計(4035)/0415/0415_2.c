#include <stdio.h>
#include <stdlib.h>

int f(n)
{
	if(n>0)
	{
		return 2*f(n-1)-5;
	} 
	else
	{
		return 3;
	} 
}

 int main()
{
	int n=0;
	printf("\nPlease input a number.");
	scanf("%d", &n);
	printf("\ninput:%d",n);
	printf("\noutput:%d",f(n));
	return 0;
}
