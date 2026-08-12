#include<stdio.h>
// a program to swap two numbers using a third variable
int main()
{
int a ,b ,c ;
printf("enter the value of a and b ");
scanf("%d %d", &a ,&b);
c=a;
a=b;
b=c;
printf("after swapping %d %d",a,b);
return 0;
}