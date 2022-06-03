#include<stdio.h>
int main()
{
    float a;

    printf("Enter km value: ");
    scanf("%f",&a);

    a=a*1000;

    printf("Meter value= %.2f",a);

    return 0;
}
