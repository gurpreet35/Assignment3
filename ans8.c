//Write a program to check whether a given year is a leap year or not.
#include <stdio.h>
int main()
{
    int year, y;
    printf("enter a year");
    scanf("%d", &year);
    y = year / 100;
    if (year % 100 == 0)
    {
        if (y % 4 == 0)
        {
            printf("%d is a leap year", year);
        }
        else
        {
            printf("%d is not a leap year", year);
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            printf("%d is a leap year", year);
        }
        else
        {
            printf("%d is not a leap year", year);
        }
    }
    return 0;
}