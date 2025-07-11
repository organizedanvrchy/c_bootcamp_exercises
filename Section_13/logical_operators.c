#include <stdio.h>
#include <stdlib.h>

int main() {
    int money;
    int grade;

    printf("Enter money and grade: \n");
    scanf("%d%d", &money, &grade);

    if(money < 50 && grade > 90) {
        printf("Ok.");
    }

    if(money < 50 || grade > 90) {
        printf("Maybe?");
    }

    if(!(grade > 80)) {
        printf("Oh no!");
    }
    
    return 0;
}