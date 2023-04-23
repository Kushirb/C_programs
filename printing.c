#include<stdio.h>
int main()
{
	int n;
	printf("enter value of n\n");
	scanf("%d",&n);
	if(n%2==0&&n%3==0)
	{
		printf("Hello World\n");
	}
	else if(n%2==0)
	{
		printf("Hello\n");
	}
	else if(n%3==0)
	{
		printf("World\n");
	}
	else
	printf("Invalid");
	
}

