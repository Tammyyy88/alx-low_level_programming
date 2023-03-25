#include <stdio.h>
#include "main.h"

int main(void)
{
    int month = 2;
    int day = 29;
    int year = 2000;
    int result;

    result = convert_day(month, day, year);

    if (result == -1)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
    }
    else
    {
        printf("%02d/%02d/%04d is day %d of the year %04d\n",
               month, day, year, result, year);
    }

    return (0);
}

