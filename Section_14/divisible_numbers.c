/*
    This program takes 3 integers as input, checks every possible
    pair of integers from the input, and prints "Divisible" if in 
    each pair at least one integer that can be divided by another 
    integer without a leaving remainder exists. 
*/

#include <stdio.h>
#include <stdlib.h>

void is_divisible(int x, int y, int z)
{
    if(x == 0 || y == 0 || z == 0)
        printf("Invalid Input. Division by 0 not allowed.");
    else if((x % y == 0 || y % x == 0) && (y % z == 0 || z % y == 0) && (x % z == 0 || z % x == 0))
        printf("Divisible");
    else
        printf("Not Divisible");
}

int main()
{
    int x, y, z;

    printf("Enter Number 1: ");
    scanf("%d", &x);

    printf("Enter Number 2: ");
    scanf("%d", &y);

    printf("Enter Number 3: ");
    scanf("%d", &z);

    is_divisible(x, y, z);

    return 0;
}