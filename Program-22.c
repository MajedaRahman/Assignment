#include <stdio.h>
int main()
{
    int divisor,divident,quotient=0,remainder;

    printf("Enter divisor:");
    scanf("%d",&divisor);

    printf("Enter divident:");
    scanf("%d",&divident);

    while (divisor>=divident)
    {
        divisor=divisor-divident;
        quotient=quotient+1;
    }
    remainder=divisor;

    printf("quotient=%d\n",quotient);
    printf("%remainder=%d\n",remainder);

    return 0;
}
