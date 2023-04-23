#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  int l,b,area;
  l=atoi(argv[1]);
  b=atoi(argv[2]);	
  area=l*b;
  printf("area is %d",area);
}
