#include <stdio.h>

int main() {
    int curr_year;
    int user_age;

    printf("Current Year: ");
    scanf("%d", &curr_year);
    printf("Current Age: ");
    scanf("%d", &user_age);

    printf("You were born in: %d", (curr_year - user_age));

    return 0;
}