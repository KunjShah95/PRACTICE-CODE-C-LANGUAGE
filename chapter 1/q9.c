#include<stdio.h>

int main(){
    int f,c;
    printf("Enter the temperature in fahrenheit: \n");
    scanf("%d",&f);
    c=(f-32)*5/9;
    printf("Temperature in celsius is: %d\n",c);
     return 0;
}