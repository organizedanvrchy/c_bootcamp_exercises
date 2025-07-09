#include <stdio.h>

void square_num(int num) {
    int sqr = num * num;
    printf("\nX^2: %d", sqr);
    
    int quad = sqr * sqr;
    printf("\nX^4: %d", quad);
    
    int hex = sqr * quad;
    printf("\nX^6: %d", hex);
    
    int oct = quad * quad;
    printf("\nX^8: %d", oct);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    square_num(num);

    return 0;
}