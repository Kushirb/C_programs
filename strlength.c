#include<stdio.h>
int main()
{
	int i,len=0;
	char str[20];
	printf("Enter your string\n");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		len=len+1;
	}
	printf("length of string is %d",len);
	return 0;
}
