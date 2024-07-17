#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;

   printf("Введіть координати центрів та радіуси кіл (x1 y1 r1 x2 y2 r2): ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);


    double dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));


    if (dist == 0 && r1 == r2) {

        printf("-1\n");
    } else if (dist > r1 + r2 || dist < fabs(r1 - r2)) {
        printf("0\n");
    } else if (dist == r1 + r2 || dist == fabs(r1 - r2)) {
        printf("1\n");
    } else {
        printf("2\n");
    }

    return 0;
}
