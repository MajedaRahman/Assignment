#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,value;

    for ( i=1; i<=8; i++)
    {
        value = pow(2,i);
        printf("%d ",value);
    }
    return 0;
}
