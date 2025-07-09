#include <stdio.h>

void driving_time(int distance, int speed) {
    int hours = distance/speed;
    float minutes = speed/60.0;
    int remaining_minutes = (distance % speed) / minutes;

    printf("\nThe total time to arrive at your destination is: %d hour(s) and %d minute(s)", hours, remaining_minutes);
}

int main() {
    int distance, speed;

    printf("\nEnter the distance between your location and the destination (miles): ");
    scanf("%d", &distance);

    printf("\nEnter the speed at which you drive (miles per hour): ");
    scanf("%d", &speed);

    driving_time(distance, speed);

    return 0;
}