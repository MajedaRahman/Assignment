#include <stdio.h>
int main()
{
    int num, sum=0, firstDigit, lastDigit;

    printf("Enter any number to find square of first and last digit: ");
    scanf("%d", &num);

    lastDigit = num % 10; firstDigit = num;

    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;
    firstDigit=pow(firstDigit,2);
    lastDigit=pow(lastDigit,2);

    printf("Square of first digit = %d\n",firstDigit);
    printf("Square of last digit = %d\n", lastDigit);

    return 0;
}
