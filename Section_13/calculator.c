#include <stdio.h>
#include <stdlib.h>

int calculator(int num1, int num2, char op) {
    int res = 0;
    switch(op) {
        case '+':
            res = num1 + num2;
            printf("\n%d %c %d = %d\n", num1, op, num2, res);
            break;
        case '-':
            res = num1 - num2;
            printf("\n%d %c %d = %d\n", num1, op, num2, res);
            break;
        case '*':
            res = num1 * num2;
            printf("\n%d %c %d = %d\n", num1, op, num2, res);
            break;
        case '/':
            res = num1 / num2;
            printf("\n%d %c %d = %d\n", num1, op, num2, res);
            break;
        case '%':
            res = num1 % num2;
            printf("\n%d %c %d = %d\n", num1, op, num2, res);
            break;
        default:
            printf("Invalid Input.\n");
            break;
    }
    return 0;
}

int main() {
    int num1, num2;
    int flag = 1;
    char op;

    while(flag != 0){
        printf("\nWelcome to the Ultimate C Calculator!\n");
        printf("Enter Number 1: ");
        scanf("%d", &num1);

        printf("Enter Operator (+, -, *, /, %%): ");
        scanf(" %c", &op); // Space before %c to ignore whitespace

        printf("Enter Number 2: ");
        scanf("%d", &num2);

        int res = calculator(num1, num2, op);
        if(res == 0){
            flag = res;
        }
    }
    return 0;
}