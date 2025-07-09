#include <stdio.h>

void sum_digits(int num) {
    int hundreds_digit = num/100;
    printf("\nHundreds: %d\n", hundreds_digit);
    
    int tens_digit = (num - (hundreds_digit * 100))/10;
    printf("Tens: %d\n", tens_digit);
    
    int ones_digit = num - (hundreds_digit * 100 + tens_digit * 10);
    printf("Ones: %d\n", ones_digit);

    int digits_sum = hundreds_digit + tens_digit + ones_digit;
    printf("\nSum of digits: %d", digits_sum);

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
            sum_digits(num); 
            flag = 1;
        }
    }

    return 0;
}