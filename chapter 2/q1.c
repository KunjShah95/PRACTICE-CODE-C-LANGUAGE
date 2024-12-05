// #include<stdio.h>

// int main(){
//     int a,b;
//     printf("Enter two numbers: ");
//     scanf("%d%d",&a,&b);
//     if(a>b){
//         printf("%d is greater than %d",a,b);
//     }
//     else{
//         printf("%d is greater than %d",b,a);
//     }
    
//      return 0;
// }

// 2nd method

#include<stdio.h>
int main(){ 
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is greater than %d and %d",a,b,c);
    }
    else if (b>c && b>a){
        printf("%d is greater than %d and %d",b,a,c);
    }    
    else{
        printf("%d is greater than %d and %d",c,a,b);
    }
    
     return 0;
}