#include<stdio.h>
int main ()
{
    int i,j,k,sum=0,n,num=1;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        num=1;
        printf("(");
        for(j=0; j<i; j++)
        {
            printf("%d^2",num);
            sum+=num*num;
            num+=2;
            if(j<i-1)
            {
                printf("+");
            }
        }
        if (i==n)
        {
            printf(")");
        }
        else
        {
            printf(")+");
        }
    }
    //printf("= %d\n", sum);

    return 0;
}
