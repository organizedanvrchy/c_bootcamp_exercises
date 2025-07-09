#include <stdio.h>

void nth_val_calc(int a, int d, int n) {
    int a_n;
    a_n = a + (n - 1) * d;

    printf("The nth term is: %d", a_n);
}

int main() {
    int a, d, n;

    printf("Enter the initial term (a): ");
    scanf("%d", &a);

    printf("Enter the difference between values in the sequence: ");
    scanf("%d", &d);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    nth_val_calc(a, d, n);

    return 0;
}