#include<stdio.h>
int fun()
{
int a;
printf("\nEnter a number");
scanf("\n%d",&a);
if(a>0)
printf("\nThe give number %d is positive",a);
else if(a<0)
printf("\nThe give number %d is negative",a);
else if(a==0)
printf("\nThe give number %d is zero",a);
return 0;
}
void main()
{
fun();
}