 //print numbers of table 5 if its is <25 else print odd numbers
 #include <stdio.h>
int main() 
{
    int num, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num <=5) 
	{
        for (i = 1; i <= num; i++) 
		{
            printf("5 x %d = %d\n", i, i*5);
        }
    } 
	else
	{
        for (i = 1; i <= num; i++) 
		{
            if (i % 2 != 0)
		   {
                printf("%d ", i);
            }
        }
    }
    
    return 0;
}

