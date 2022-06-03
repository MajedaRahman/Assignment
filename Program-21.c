#include<stdio.h>
int main()
{
    int a,b,var1,var2;

    printf("Enter number = ");
    scanf("%d",&a);

    b=a%10;
    a=a/10;
    var1=b*10;
    var2=a;
    printf("After inversing value = %d",var1+var2);

    return 0;
}
