#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1;
    int num2;

    printf("Enter two numbers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    // Check for equality
    if(num1 == num2) {
        printf("\nEQUAL\n");
    } else {
        printf("\nNOT EQUAL\n");
    }

    return 0;
}