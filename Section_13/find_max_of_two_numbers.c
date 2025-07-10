#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    int flag = 1;

    while(flag != 0) {
        printf("\nEnter the 1st integer: ");
        scanf("%d", &num1);

        printf("\nEnter the 2nd integer: ");
        scanf("%d", &num2);

        if(num1 > num2) {
            printf("\nThe greater number is: %d\n", num1);
            flag = 0;
        } else if(num2 > num1) {
            printf("\nThe greater number is: %d\n", num2);
            flag = 0;
        } else {
            printf("\nThe numbers are equal!\n");
            flag = 0;
        }
    }
    return 0;
}