#include<stdio.h>

int main(){
    int rs,paisa;
    printf("Enter rupees:\n");
    scanf("%d",&rs);
    paisa = rs*100;
    printf("%d rupees is equal to %d paisa",rs,paisa);
     return 0;
}