#include <stdio.h>

void f_to_c(double temp) {
    double celsius = ((temp - 32)/(1.8));
    printf("%.2lf C", celsius);
}

void c_to_f(double temp) {
    double fahrenheit = ((temp * (1.8)) + 32);
    printf("%.2lf F", fahrenheit);
}

int main() {
    double temp;
    int usr_choice;
    int flag = 1;
    
    while(flag != 0) {
        printf("\nWelcome to the Weather Station!\n");
        printf("\nWould you like to convert the temperature from: \n1. F to C\nor\n2. C to F\n");
        scanf("%d", &usr_choice);

        if(usr_choice == 1) {
            printf("\nEnter the temperature in Fahrenheit: ");
            scanf("%lf", &temp);
            f_to_c(temp);
            flag = 0;
        } else if(usr_choice == 2){
            printf("\nEnter the temperature in Celsius: ");
            scanf("%lf", &temp);
            c_to_f(temp);
            flag = 0;
        } else {
            printf("\n> Invalid choice. Please try again!\n");
        }
    }
    return 0;
}
