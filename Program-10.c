#include <stdio.h>
int main()
{
    int var1, var2;

    printf("Enter two numbers: ");
    scanf("%d %d",&var1,&var2);

    var1=var1+var2;
    var2=var1-var2;
    var1=var1-var2;

    printf("After changing value: %d %d",var1,var2);

    return 0;
}
