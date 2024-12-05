#include<stdio.h>

int main(){
    int n,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int nsp = n/2;
    int nst = 1;
    for(i=1;i<=n;i++){
        for(j=1;j<=nsp;j++){//spaces
            printf(" ");
        }
        for(j=1;j<=nst;j++){
            printf("* ");//stars
        }
        if(i<=n/2){
            nsp = nsp - 1;
            nst = nst + 2;
        }else{
            nsp = nsp + 1;
            nst = nst - 2;
        }
        printf("\n");
    }
    
     return 0;
}