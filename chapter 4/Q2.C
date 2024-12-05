#include<stdio.h>
int main(){
    int n,i,even=0,odd=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        if(array[i]%2==0){
            even++;
            }
        else{
            odd++;
        }
    }
    printf("Number of even numbers: %d\n",even);
    printf("Number of odd numbers: %d",odd);
    return 0;
}