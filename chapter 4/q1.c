#include<stdio.h>
int main(){
int arr[10],i;
int sum = 0;
printf("Enter 10 integers:");
for(i=0;i<=9;i++){
    scanf("%d",&arr[i]);
}
for ( i = 0; i < 10 ; i++)
{
    sum += arr[i];
    
}
printf("Sum = %d",sum);
return 0;
}
