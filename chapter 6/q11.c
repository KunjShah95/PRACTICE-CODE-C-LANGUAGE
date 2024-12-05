//call by value
#include<stdio.h>
 void  passbyvalue(int num){
    num=num+2;
    printf("Inside the function,num=%d\n",num);
}
int main(){
    int a=15;
    printf("Before calling the function, x=%d\n",a);
    passbyvalue(a);
    printf("After calling the function, x=%d\n",a);
    return 0;
    }