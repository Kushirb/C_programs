#include<stdio.h>
void main()
{
		int n,i,flag;
		printf("enter n\n");
		scanf("%d",&n);
		flag=0;
		for(i=2;i<=n/2;i++)
		{
			if((n%i)==0)
			{
				flag=1;
			}
		}
		if(flag==0)
		printf(" Number %d is prime\n",n);
		else
		printf("Number %d is not prime\n",n);
}
