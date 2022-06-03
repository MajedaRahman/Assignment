#include<stdio.h>
int main()
{
    int i,j,k=1,count=1;

    for ( i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", k++);

            if (j>=5)
            {
                printf(" ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
