#include <stdio.h>
#include <stdlib.h>

main() 
{
	//One();
	Two();
	return 0;
}

One()
{
	int i=0,Number=0;
	
	printf("�п�J�@�ӼƦr:");
	scanf("%d",&Number);
	printf("�z��J���Ʀr��:%d\n",Number);
	
	printf("��X:");
	for(i=1;i<Number;i++)
	{
		if(i%2==0 || i%3==0)
		{
			printf(" %d",i);
		}
	}
}

Two()
{
	int Int_Printf=0,Int=0,i=0;
	
	printf("�п�J�@�Ӥ��h��5��ƪ������:");
	scanf("%d", &Int);
	printf("�z��J����Ƭ�:%d\n",Int);
	
	Int_Printf=Int;
    while(Int != 0)
    {
        Int /= 10;// n = n/10
        ++i;
    }
    printf("��J:%d�A��X:%d���\n",Int_Printf,i);
}
