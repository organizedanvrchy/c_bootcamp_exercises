#include <stdio.h>

int main() {
    double num;

    printf("Enter a decimal number: ");
    scanf("%lf", &num);

    int num_int_ver = (int)num;
    double num_decimals = num - num_int_ver;
    printf("The integer portion is: %d\n", num_int_ver);
    printf("The decimal portion is: %lf\n", num_decimals);

    return 0;
}