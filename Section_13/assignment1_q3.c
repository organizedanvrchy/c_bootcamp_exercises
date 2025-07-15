#include <stdio.h>
#include <stdlib.h>

void order_check(int num) {
    int first_digit, second_digit, third_digit;

    first_digit = num/100;
    second_digit = (num%100)/10;
    third_digit = (num%100)%10;

    if(first_digit < second_digit && second_digit < third_digit) {
        printf("ASCENDING");
    } else {
        printf("NOT ASCENDING");
    }
}

int main() {
    int num;

    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    order_check(num);

    return 0;
}