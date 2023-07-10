#include <stdio.h>

double areaOfCircle (double diameter){
    double pi = 3.14;
    double r = diameter / 2;
    return pi * r * r;
}

int main () {
    double diameter;
    double area;
    
    printf("enter the diameter of the circle");
    scanf("%lf", &diameter);
    
    area = areaOfCircle(diameter);
    printf("The area of given circle is %f", area);
    return 0;
}