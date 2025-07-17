#include <stdio.h>
#include <stdlib.h>

int check_leap_year(int year)
{
    if(year % 400 == 0)
        return 0;
    else if(year % 100 == 0)
        return 1;
    else if(year % 4 == 0)
        return 0;
    else
        return 1;
}

int main()
{
    int curr_day, curr_month, curr_year;
    int leap_year = 0;

    printf("Enter the date below by following the prompts!\nThe output will be the date of the next day!\n");

    printf("Month: ");
    scanf("%d", &curr_month);

    printf("Day: ");
    scanf("%d", &curr_day);
    
    printf("Year: ");
    scanf("%d", &curr_year);

    if(curr_month == 2)
        if(check_leap_year(curr_year) == 0)
            leap_year = 1;
    
    curr_day += 1;  // Increment Day

    switch(curr_month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(curr_day <= 31)
                break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(curr_day <= 30)
                break;
        case 2:
            if(curr_day <= 29 && leap_year == 1)
                break;
            else if(curr_day <= 28)
                break;
        default:
            curr_day = 1;       // Set to 1st Day if more than number of days in specific month
            curr_month += 1;    // Increment Month
            if(curr_month > 12) 
            {
                curr_month = 1; // Set to January if next day enters the next month in a new year
                curr_year += 1; // Increment Year
            }
    }

    printf("Next Day: %02d/%02d/%d\n", curr_month, curr_day, curr_year);

    return 0;
}