#include<stdio.h>

int main(){
    float total,hra,da,basic,ta;
    printf("Enter the basic:");
    scanf("%f",&basic);
    da=(basic*50)/100;
    if(basic<6000){
        hra = 400;
        ta = 100;
        }
        else if(basic>=6001 && basic<=10000){
            hra = 1400;
            ta = 300;
        }
        else{
            hra = 2400;
            ta = 700;
        }
        total = basic+hra+da+ta;
        printf("The total salary is %f",total);
     return 0;
}