#include <stdio.h>
#include <math.h>

void distance_btwn_points(int x1, int x2, int y1, int y2) {
    int x_sq_diff = (x1 - x2)*(x1 - x2);
    int y_sq_diff = (y1 - y2)*(y1 - y2);

    double dist_diff = sqrt(x_sq_diff + y_sq_diff);
    printf("Distance between points: %lf units", dist_diff);
}

int main() {
    int x1, x2, y1, y2;

    printf("\n== POINT 1 ==");
    printf("\nEnter the 'x' value: ");
    scanf("%d", &x1);

    printf("\nEnter the 'y' value: ");
    scanf("%d", &y1);

    printf("\n== POINT 2 ==");
    printf("\nEnter the 'x' value: ");
    scanf("%d", &x2);

    printf("\nEnter the 'y' value: ");
    scanf("%d", &y2);

    distance_btwn_points(x1, x2, y1, y2);
    return 0;
}