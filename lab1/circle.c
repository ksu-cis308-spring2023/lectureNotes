#include <stdio.h>

double area(double rad);

int main() {
    double r;
    printf("Enter radius: ");
    scanf("%lf", &r);

    double answer = area(r);

    //The area is 6.72
    printf("The area is %.2lf\n", answer);

    return 0;
}

double area(double rad) {
    //pi r squared
    return 3.14 * rad * rad;
}