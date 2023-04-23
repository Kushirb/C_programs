#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter n number\n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		printf("%d\n",i);
		i++;
	}
}
	
