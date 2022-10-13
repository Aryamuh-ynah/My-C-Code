#include<stdio.h>

void main()

{
    float c, f;
    printf("Enter Celsius value: ");
    scanf("%f", &c);

    f=(((9*c)/5)+32);

    printf("%0.2f Celsius = %0.2f Fahrenheit", c,f);
}
