#include <stdio.h>
#include <stdlib.h>

// Iterative
void find_max_iter(int num1, int num2) {
    if(num1 > num2) {
        printf("Max: %d\n", num1);
    } else if(num2 > num1) {
        printf("Max: %d\n", num2);
    } else {
        printf("Numbers are equal!\n");
    }
}

// Ternary Operators
void find_max_tern(int num1, int num2) {
    // condition ? true res : false res;
    int max = (num1 > num2) ? num1 : num2;
    printf("Max: %d\n", max);
}

int main() {
    int num1;
    int num2;

    printf("Enter 2 numbers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    find_max_iter(num1, num2);
    find_max_tern(num1, num2);

    return 0;
}