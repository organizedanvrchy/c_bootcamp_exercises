#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1;
    int num2;

    printf("\nNumber 1: ");
    scanf("%d", &num1);
    printf("\nNumber 2: ");
    scanf("%d", &num2);

    if(num1 == num2) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}