#include <stdio.h>
#include <ctype.h>
int main()
{
    char c,result;

    printf("Enter any small character: ");
    scanf("%c",&c);

    result= toupper(c);

    printf("Result= %c",result);

    return 0;
}
