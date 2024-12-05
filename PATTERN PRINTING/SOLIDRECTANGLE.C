#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("Enter the number of columns: ");
    scanf("%d",&m);

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("* ");
            }
        printf("\n");   
        }
}