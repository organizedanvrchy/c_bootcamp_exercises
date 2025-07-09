#include <stdio.h>

double grade_average(double x, double y, double z) {
    return (x + y + x)/3;
}

int main() {
    int a, b, c;

    printf("Grade #1: ");
    scanf("%d", &a);

    printf("Grade #2: ");
    scanf("%d", &b);

    printf("Grade #3: ");
    scanf("%d", &c);

    printf("Average: %.2lf", grade_average(a, b, c));

    return 0;
}