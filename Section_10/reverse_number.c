#include <stdio.h>

// Function to reverse digits
void reverse_num(int num) {
    int reverse = 0;

    while(num > 0) {
        // Extract last digit and add to reverse
        reverse = (reverse * 10) + (num % 10);
        // Remove last digit from num
        num /= 10; 
    }

    printf("\nReversed Number: %d\n", reverse);
}

int main() {
    int num;
    int flag = 0;

    while(flag == 0){
        printf("\nEnter a 3-digit number: ");
        scanf("%d", &num);

        if(!(int)num) {
            printf("Invalid input. Please try again...\n");
        } else if(num > 999) {
            printf("Number too long! Please try again...\n");
        } else if(num < 100) {
            printf("Number too short! Please try again...\n");
        } else {
            reverse_num(num); 
            flag = 1;
        }
    }

    return 0;
}