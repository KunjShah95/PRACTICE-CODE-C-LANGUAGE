#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int nst = 1;
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){ //for spaces
            printf(" ");
            }
            for(j=1;j<=nst;j++){ //for stars
                printf("%d ",j);
                }
            nst = nst + 2;  
        printf("\n");   
        }
}