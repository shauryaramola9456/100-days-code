//Q7Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two number a and b\n");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the number after swapping %d %d\n", a,b);
    return 0;
}

