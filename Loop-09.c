#include<stdio.h>
int main()
{
    int number,reminder,sum=0;

    scanf("%d", &number);

    while (number>0)
    {
        reminder= number%10;
        sum +=reminder;
        number = number/10;
    }
    printf("Sum of the digits of Given Number = %d\n", sum);

    return 0;
}
