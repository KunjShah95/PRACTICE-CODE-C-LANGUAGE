#include<stdio.h>

/**
 * This program takes an integer input from the user and checks whether 
 * the number is even or odd. It then prints the result to the console.
 */
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x%2==0){
        printf("%d is even",x);
    }
    else{
        printf("%d is odd",x);
    }
     return 0;
}