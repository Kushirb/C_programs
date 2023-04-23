#include<stdio.h>
void main()
{
	int marks;
	printf("Enter the marks obtained\n");
	scanf("%d",&marks);
	if(marks<25)
	{
		printf("Student is failed\n");
	}
	else if(marks>=25 && marks<30)
	{
		printf("D Grade");
	}
	else if(marks>=30 && marks<35)
	{
		printf("C Grade");
	}
	else if(marks>=35 && marks<40)
	{
		printf("B Grade\n");
	}
	else if(marks>=40 && marks<45)
	{
		printf("A Grade");
	}
	else
	{
		printf("S Grade");
	}
}
