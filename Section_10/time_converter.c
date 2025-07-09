#include <stdio.h>

int main() {
    int s = 0;

    printf("Enter the number of seconds you want to convert: ");
    scanf("%d", &s);

    int h = s/3600;
    int m = (s - (h * 3600))/60;
    int rs = s - (h * 3600 + m * 60);

    printf("%02d:%02d:%d\n", h, m, rs);


    return 0;
}
