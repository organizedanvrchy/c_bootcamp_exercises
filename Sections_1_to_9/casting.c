#include <stdio.h>

// a and b are integers being casted as doubles
double result(double a, double b) {
    return a/b; // returns a floating point number
}

int main() {
    int a;
    int b;
    double res;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter another number: ");
    scanf("%d", &b);

    printf("Result: %.2lf\n", result(a, b));

    return 0;
}
