#include<stdio.h>
int main()
{
    int a,year,month,day;

    printf("Enter days: ");
    scanf("%d",&a);

    year=a/365;
    month=(a%365)/12;
    day=(a%365)%12;

    printf("Year = %d,Month = %d,Day = %d",year,month,day);

    return 0;
}
