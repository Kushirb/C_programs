#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int len;
	char str;
	printf("Enter string");
	scanf("%c",&str);
	len=strlen(str);
	printf("%d\t",len);
}
