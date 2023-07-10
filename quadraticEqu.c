#include <stdio.h>
#include <math.h>

int main(){
    printf("add the constants in the quadratic equ ax^2 + bx + c = 0 (should be an integer)\n");
    int a, b, c;
    double power;
    double neg;
    double sqRoot;
    double x1;
    double x2;

    printf("Constant a: ");
    scanf("%d", &a);
    printf("Constant b: ");
    scanf("%d", &b);
    printf("Constant c: ");
    scanf("%d", &c);

    printf("ur quadratic equation is %dx^2 + %dx + %d = 0. substituting this in (-b + or - sqrt(b^2-4ac))/(2a)\n", a, b, c);

    power = pow (b, 2);
    neg = power - 4 * a * c;

    if (neg < 0) {
        printf("the given quadratic equation has no real solution");
        return 0;
    }

    sqRoot = sqrt(neg);

    x1 = (- b + sqRoot)/(2 * a);
    x2 = (- b - sqRoot)/(2 * a);

    printf("x1 = %lf and x2 = %lf", x1, x2);
    return 0;
}