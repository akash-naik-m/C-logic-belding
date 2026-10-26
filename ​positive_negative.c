#include<stdio.h>
void main()
{
int x;
printf("enter a number:");
scanf("%d",&x);
if (x>0)
{
printf("it is a positive");
}
else if (x<0)
{
printf("it is a negative ");
}
else
{
printf("neither negative nor positive ");
}
}
