#include <stdio.h>
#include <stdlib.h>

void clock_convert(int s)
{   
    int total_hours = s / 3600;
    int minutes = (s - total_hours * 3600);
    int total_minutes = minutes / 60;
    int remaining_seconds = minutes % 60;

    printf("%02d:%02d:%02d", total_hours, total_minutes, remaining_seconds);
}

int main()
{
    int seconds;

    printf("Enter the number of seconds to convert: ");
    scanf("%d", &seconds);

    clock_convert(seconds);

    return 0;
}