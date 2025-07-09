#include <stdio.h>

void swap(double a, double b) {
    printf("\n=== BEFORE ===\n");
    printf("a: %.3lf\n", a);
    printf("b: %.3lf\n", b);

    double temp = 0;

    temp = a;
    a = b;
    b = temp;

    printf("\n=== AFTER ===\n");
    printf("a: %.3lf\n", a);
    printf("b: %.3lf\n", b);
}

int main() {
    double a;
    double b;

    printf("Enter a number for a: ");
    scanf("%lf", &a);

    printf("Enter a number for b: ");
    scanf("%lf", &b);

    swap(a, b);

    return 0;
}