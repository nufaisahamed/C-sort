#include <stdio.h>

void leap(int year)

{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d is a leap year\n", year);
            }
            else
            {
                printf("%d is not a leap year\n", year);
            }
        }
        else
        {
            printf("%d is a leap year\n", year);
        }
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }
   
}

int main()
{
    int year;
    printf("enter the year :");
    scanf("%d" ,&year);
    leap(year);      
   
}

