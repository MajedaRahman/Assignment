#include<stdio.h>
int main()
{
    char a;

    printf("Enter lowercase character: ");
    scanf("%c",&a);

    a=a-32;

    printf("Uppercase character is: %c",a);

    return 0;
}
