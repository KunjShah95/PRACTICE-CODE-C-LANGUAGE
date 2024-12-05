#include <stdio.h>
#define PI 3.14

void areaofsquare(float side) {
    printf("The area of square is %f\n", side * side);
}

void areaofrectangle(float l, float b) {
    printf("The area of rectangle is %f\n", l * b);
}

void areaofcircle(float r) {
    printf("The area of circle is %f\n", PI * r * r);
}

void areaoftriangle(float base, float height) {
    printf("The area of triangle is %f\n", 0.5 * base * height);
}

int main() {
    float side, l, b, r, base, height;

    printf("Enter the side of square: ");
    scanf("%f", &side);
    
    printf("Enter the length of rectangle: ");
    scanf("%f", &l);
    
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &b);
    
    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    
    printf("Enter the base of triangle: ");
    scanf("%f", &base);
    
    printf("Enter the height of triangle: ");
    scanf("%f", &height);
    
    areaofsquare(side);
    areaofrectangle(l, b);
    areaofcircle(r);
    areaoftriangle(base, height);
    
    return 0;
}