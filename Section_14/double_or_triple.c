#include <stdio.h>
#include <stdlib.h>

void double_or_triple(int num) {
    int temp1 = num / 10;    // Generates numbers from 1 - 9, if two-digit.
    int temp2 = num / 100;   // Generates numbers from 1 - 9, if three-digit.

    if(0 < temp1 && temp1 < 10) {
        printf("Double Digit Number!");
    } else if(0 < temp2 && temp2 < 10) {
        printf("Triple Digit Number!");
    } else {
        printf("NOT A Triple- or Double- Digit Number");
    }
}

// Better to explicitly define range for double and triple digit numbers
// instead of wasting memory to create temp variables and using division.
// Use range (10 >= num >= 99) for double and (100 >= num >= 999) for triple.

int main() {
    int num;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    double_or_triple(num);

    return 0;
}