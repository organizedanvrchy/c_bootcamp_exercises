#include <stdio.h>
#include <stdlib.h>

int main() {
    double num;

    printf("Please enter a number: ");
    scanf("%lf", &num);

    if(num > 0) {
        printf("%d", 1);
    } else if(num < 0) {
        printf("%d", -1);
    } else {
        printf("%d", 0);
    }

    return 0;
}