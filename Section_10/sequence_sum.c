#include <stdio.h>

void sequence_sum(double a, double an, double n) {
    double seq_sum;
    seq_sum = (a + an) * (n/2);

    printf("\nThe sum of the sequence is: %.2lf", seq_sum);
}

int main() {
    double a, an, n;

    printf("Enter the initial term (a_1): ");
    scanf("%lf", &a);

    printf("\nEnter the nth term (a_n): ");
    scanf("%lf", &an);

    printf("\nEnter the number of terms in the sequence (n): ");
    scanf("%lf", &n);

    sequence_sum(a, an, n);

    return 0;
}