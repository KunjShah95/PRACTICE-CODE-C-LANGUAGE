#include<stdio.h>

int main(){
    int n,sum=0;
    float average;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int num;
        printf("Enter element %d:",i+1);
        scanf("%d",&num);
        sum += num;
    }
    average = (float)sum/n;
    printf("Average = %f",average);
     return 0;
}