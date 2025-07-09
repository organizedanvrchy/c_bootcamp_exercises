#include <stdio.h>

void rect_perim(double height, double width) {
    double perim;
    perim = (height * 2) + (width * 2);
    printf("Perimeter: %.2f\n", perim);
}

void rect_area(double height, double width) {
    double area;
    area = height * width;
    printf("Area: %.2f\n", area);
}

int main() {
    double rect_ht;
    double rect_wd;

    printf("Rectangle height: ");
    scanf("%lf", &rect_ht);

    printf("Rectangle width: ");
    scanf("%lf", &rect_wd);

    rect_area(rect_ht, rect_wd);
    rect_perim(rect_ht, rect_wd);

    return 0;
}