#include<stdio.h>
int main()
{
    int i,a,b,power;

    scanf("%d%d", &a,&b);

    power = pow(a,b);

    printf("Power Value = %d\n", power);

    return 0;
}
