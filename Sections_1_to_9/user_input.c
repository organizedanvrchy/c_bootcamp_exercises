#include <stdio.h>

int main() {
    int grade_1;
    int grade_2;

    scanf("%d", &grade_1);
    scanf("%d", &grade_2);

    printf("Average: %d\n", (grade_1 + grade_2)/2);

    return 0;
}