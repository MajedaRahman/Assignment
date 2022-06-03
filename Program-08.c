#include<stdio.h>
int main()
{
    float c,f;

    printf("Enter celsius value: ");
    scanf("%f",&c);

    f=(9*c)/5+32;

    printf("Fahrenheit value= %.2f",f);

    return 0;
}
