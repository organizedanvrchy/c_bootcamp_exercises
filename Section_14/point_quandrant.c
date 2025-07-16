#include <stdio.h>
#include <stdlib.h>

void quadrant_check(int x, int y)
{   
    if(x == 0 && y == 0)
        printf("Origin");
    else if(x == 0)
        printf("Y-axis");
    else if(y == 0)
        printf("X-axis");
    else if(x > 0) {
        if(y > 0)
            printf("Quadrant #1");
        else if(y < 0)
            printf("Quadrant #4");
    } else if(x < 0) {
        if(y > 0)
            printf("Quadrant #2");
        else if(y < 0)
            printf("Quadrant #3");
    }
}

int main()
{
    int x, y;

    printf("Enter the X-coordinate: ");
    scanf("%d", &x);
    
    printf("Enter the Y-coordinate: ");
    scanf("%d", &y);

    quadrant_check(x, y);

    return 0;
}
