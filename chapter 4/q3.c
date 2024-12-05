#include<stdio.h>

int main(){
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    int revArr[n];
    printf("Enter the %d integers:\n",n);
    for (int i = 0; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n ; i++)
    {
        revArr[i] = arr[n-1-i];
        }
        printf("Reversed array: \n");
    for(i=0; i<n;i++){
        printf("%d ",revArr[i]);
    }
    printf("\n");
     return 0;
}