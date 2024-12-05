#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter the number of elements in the list: ");
    scanf("%d",&n);
    int list[n];
    printf("Enter the elements of the list: ");
    for(i=0;i<n;i++){
        scanf("%d",&list[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(list[i]>list[j]){
            for ( k = j; k < n-1; k++)
            {
                list[k] = list[k+1];
            }
            n--;
            j--;
            }
        }
    }
    printf("The list after removing duplicates is: ");\
    for(i=0;i<n;i++){
        printf("%d ",list[i]);  
        }
         return 0;   
}