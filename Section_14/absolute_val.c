#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num < 0) 
        num *= -1;
    
    printf("|%d|", num);

    return 0;
}