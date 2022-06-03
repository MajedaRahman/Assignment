#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a,b;

    printf("Enter The Number of terms: ");
    scanf("%d", &n);

    for ( i=1; i<=n; i++)
    {
        b = pow(i,2)+(i-1);
        printf("%d ",b);
    }
    return 0;
}
