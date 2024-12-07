#include<stdio.h>
#define PI 3.14
int main(){
    int a,b,c,r,peri,area;
    printf("Enter the sides of square: ");
    scanf("%d",&a);
    peri = 4*a;
    area = a*a;
    printf("\n the perimeter of the square is %d",peri);
    printf("\n the area of the square is %d",area);
    printf("\nenter the sides of rectangle:");
    scanf("%d%d",&b,&c);
    peri = 2*(b+c);
    area = b*c;
    printf("\n the perimeter of the rectangle is %d",peri);
    printf("\n the area of the rectangle is %d",area);
    printf("\nenter the radius of circle:");
    scanf("%d",&r);
    peri = 2*3.14*r;
    area = 3.14*r*r;
    printf("\n the perimeter of the circle is %d",peri);
    printf("\n the area of the circle is %d",area);
     return 0;
}