#include<stdio.h>
int main()
{
    int i,a,fact=1;

    scanf("%d", &a);

    for ( i=1; i<=a; i++)
    {
        fact= fact*i;
    }
    printf("Factorial IS = %d\n", fact);

    return 0;
}
