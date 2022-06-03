#include<stdio.h>
int main()
{
    int i,a,sum=0;

    for ( i=0; i<3; i++)
    {
        scanf("%d", &a);
        sum +=a;
    }
    printf("SUM = %d\n", sum);

    return 0;
}
