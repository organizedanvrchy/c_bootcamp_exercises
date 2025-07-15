#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1;
    int num2;
    int num3;

    printf("Enter three numbers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    // Check for equality
    if(num1 == num2 && num2 == num3) {
        printf("\nEQUAL\n");
    } else {
        printf("\nNOT EQUAL\n");
    }

    return 0;
}