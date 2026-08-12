#include<stdio.h>
// a program to convert temperature from celsius to fahrenheit
int main()
{
    float tempC,tempF;
    printf("enter the temperature in celsius");
    scanf("%f,&tempC");
    tempF=(tempC*1.8)+32;
printf("the temperature in fahrenheit %f\n",tempF );
return 0;
}
