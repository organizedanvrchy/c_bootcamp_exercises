#include <stdio.h>

void sal_calc(double salary, double hours) {
    double monthly_salary = salary * hours;

    printf("Your month salary is: %.3lf", monthly_salary);
}

int main() {
    // Variables to store Salary per hour and Hours per month
    double salary_per_hour, hours_per_month;
    
    printf("Welcome to the Salary Calculator!\n");
    printf("\nEnter your salary (per hour): ");
    scanf("%lf", &salary_per_hour);

    printf("Nice!\n");

    printf("\nEnter your hours worked (per month): ");
    scanf("%lf", &hours_per_month);

    sal_calc(salary_per_hour, hours_per_month);

    return 0;
}