#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>

void letter_grade_check() {
    char l_grade;
    int valid = 1;

    while(valid != 0) {
        printf("\nEnter your grade letter (A - F): ");
        scanf(" %c", &l_grade);
        l_grade = toupper(l_grade);

        switch(l_grade) {
            case 'A':
                printf("\nGrade Between 90 - 100\n");
                valid = 0;
                break;
            case 'B':
                printf("\nGrade Between 80 - 89\n");
                valid = 0;
                break;
            case 'C':
                printf("\nGrade Between 70 - 79\n");
                valid = 0;
                break;
            case 'D':
                printf("\nGrade Between 60 - 69\n");
                valid = 0;
                break;
            case 'F':
                printf("\nGrade Between 0 - 59\n");
                valid = 0;
                break;
            default:
                printf("\nInvalid Grade Letter. Please Try Again...\n");
                sleep(1);
                system("clear");
                break;
        }
    }

}

void number_grade_check() {
    int n_grade;
    int valid = 1;
    char grade_res;

    while(valid != 0) {
        printf("\nEnter your grade: ");
        scanf("%d", &n_grade);

        if(n_grade >= 90 && n_grade <= 100) {
            printf("\nGrade : A\n");
            valid = 0;
        } else if(n_grade >= 80 && n_grade < 90) {
            printf("\nGrade : B\n");
            valid = 0;
        } else if(n_grade >= 70 && n_grade < 80) {
            printf("\nGrade : C\n");
            valid = 0;
        } else if(n_grade >= 60 && n_grade < 70) {
            printf("\nGrade : D\n");
            valid = 0;
        } else if(n_grade >= 0 && n_grade < 60) {
            printf("\nGrade : F\n");
            valid = 0;
        } else {
            printf("Invalid Input. Please Try Again...\n");
            sleep(1);
            system("clear");
        }
    }
}

int main() {
    char usr_choice;
    int flag = 1;

    while(flag != 0){
        printf("\nWelcome To The Universal Grading System!\n");
        printf("To Begin, Please Follow The Instructions Below.\n\nEnter 'L' for letters and 'N' for numbers: ");
        scanf("%c", &usr_choice);
        usr_choice = toupper(usr_choice);
        
        if(usr_choice == 'L') {
            letter_grade_check();
            flag = 0;
        } else if(usr_choice == 'N') {
            number_grade_check();
            flag = 0;
        } else {
            printf("\nInvalid Input. Please Try Again...\n");
            sleep(1);
            system("clear");
        }
    }
    return 0;
}