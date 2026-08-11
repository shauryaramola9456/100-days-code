#include<stdio.h>
//A program to calculate the area and perimeter of a rectangle 
int main ()
{
    float length , breadth;
    float perimeter , area;
    printf("enter the lenght and breadth of a rectangle ");
    scanf("%f %f",&length,&breadth);
    perimeter=2*(length+breadth);
    area=length*breadth;
    printf("the perimeter of the rectangle is %f\n", perimeter);
    printf("the area of the rectangle is %f\n", area);
    return 0;
}
