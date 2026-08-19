// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main() 
{
    int a, b, c;
    // Input the sides of the triangle
    printf("enter the sides");
    scanf("%d%d%d",&a,&b,&c);
    // Check if the sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            printf("Equilateral Triangle");
        else if (a == b || b == c || a == c)
            printf("Isosceles Triangle");
        else
            printf("Scalene Triangle");
    } else {
        printf("Invalid Triangle");
    }
    return 0;
}