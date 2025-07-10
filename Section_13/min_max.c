#include <stdio.h>
#include <stdlib.h>

// === NESTED LOGIC ===
void check_min_max(float num1, float num2, float num3) {
    if(num1 > num2 && num1 > num3) {
        printf("Max: %.3f\n", num1);
        if(num2 > num3){
            printf("Min: %.3f\n", num3);
        } else {
            printf("Min: %.3f\n", num2);
        }
    } else if(num2 > num1 && num2 > num3) {
        printf("Max: %.3f\n", num2);
        if(num1 > num3){
            printf("Min: %.3f\n", num3);
        } else {
            printf("Min: %.3f\n", num1);
        }
    } else if(num3 > num1 && num3 > num2) {
        printf("Max: %.3f\n", num3);
        if(num1 > num2){
            printf("Min: %.3f\n", num2);
        } else {
            printf("Min: %.3f\n", num1);
        }
    } else if(num1 == num2) {
        printf("Max: %.3f\n", num1);
        printf("Min: %.3f\n", num3);
    } else if(num1 == num3) {
        printf("Max: %.3f\n", num1);
        printf("Min: %.3f\n", num2);
    } else if(num2 == num3) {
        printf("Max: %.3f\n", num2);
        printf("Min: %.3f\n", num1);
    } else {
        printf("All numbers are equal! (no max or min)");
    }
}

// === SIMPLER LOGIC ===
// void check_min_max(float num1, float num2, float num3) {
//     // Set num1 to both min and max
//     float max = num1;
//     float min = num1;

//     // Check whether num2 or num3 is larger and replace max
//     if(num2 > max) {
//         max = num2;
//     }
//     if(num3 > max) {
//         max = num3;
//     }

//     // Check whether num2 or num3 is smaller and replace min
//     if(num2 < min) {
//         min = num2;
//     }
//     if(num3 < min) {
//         min = num3;
//     }

//     // Final conditional check for equality
//     if(num1 == num2 && num2 == num3) {
//         printf("\nThe numbers are equal.");
//     } else {
//         printf("\nMax: %.3f", max);
//         printf("\nMin: %.3f", min);
//     }
// }

int main() {
    float num1, num2, num3;

    printf("\nEnter 1st floating point number: ");
    scanf("%f", &num1);

    printf("\nEnter 2nd floating point number: ");
    scanf("%f", &num2);

    printf("\nEnter 3rd floating point number: ");
    scanf("%f", &num3);

    check_min_max(num1, num2, num3);

    return 0;
}