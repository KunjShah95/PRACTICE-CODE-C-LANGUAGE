#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    
  for(i= 1;i<=n;i++){
    for(j=1;j<=i;j++){
        if(i%2 == 1){
            printf("%d " , j );
            }else{
                printf("%c " , j+ 96);
            }
        }
        printf("\n");
  }
}