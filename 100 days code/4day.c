#include<stdio.h>
// A program to calculate the area and circumference of a circle 
int main ()
{
    float circum , area ;
    float radius ;
    printf("enter the radius of the circle ");
    scanf("%f", &radius);
    circum=2*(3.14)*(radius);
    area =(3.14)*(radius*radius);
    printf("the cirumference of the circle is %f", circum);
    printf("the area of the circle is %f", area);

}