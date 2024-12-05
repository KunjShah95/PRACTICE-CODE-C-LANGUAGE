#include<stdio.h>

int main(){
    float a,b;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    a>b?printf("a*b is %f",a*b):printf("a/b is %f",a/b);
     return 0;
}