#include<stdio.h>
void even_odd(int num){
    if(num%2==0){
        printf("%d is an even number", num);
    }
    else{
        printf("%d is an odd number", num);
    }
}
int main(){
    int num;
    printf("Enter an integer:");
    scanf("%d", &num);
    even_odd(num);
     return 0;
}