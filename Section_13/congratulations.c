#include <stdio.h>
#include <stdlib.h>

int main() {
    int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);

    if(grade >= 60) {
        printf("\nCongratulations!\n");
    } else {
        printf("\nSorry. You Failed...\n");
    }
    return 0;
}