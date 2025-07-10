#include <stdio.h>
#include <stdlib.h>

void check_even_odd(int num) {
    if(num%2 == 0) {
        printf("%d is even!", num);
    } else {
        printf("%d is odd!", num);
    }
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    check_even_odd(num);

    return 0;
}