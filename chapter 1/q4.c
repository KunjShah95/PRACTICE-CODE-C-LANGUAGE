#include<stdio.h>
int main(){
    float si,p,r,t;
    printf("Enter principal amount:\n");
    scanf("%f",&p);
    printf("Enter rate of interest:\n");
    scanf("%f",&r);
    printf("Enter time period:\n");
    scanf("%f",&t);
    si = p*r*t/100;
    printf("Simple interest is: %f\n",si);
}