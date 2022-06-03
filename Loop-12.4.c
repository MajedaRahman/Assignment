#include<stdio.h>
int main()
{
    int n=40,i,a=-1,b;

    for ( i=1; i<=n; i+=3)
    {
        a*=-1;
        b=i;
        b*=a;
        printf("%d ",b);
    }
    return 0;
}
