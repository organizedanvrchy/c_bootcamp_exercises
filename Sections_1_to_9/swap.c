#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int temp = 0;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("temp: %d\n", temp);

    temp = a;
    printf("\ntemp: %d\n", temp);
    a = b;
    b = temp;

    printf("\na: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}