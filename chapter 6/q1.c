#include<stdio.h>

int main(){
    int a=10;
    int *ptr=&a;
    printf("The value of a is %d\n", a);
    printf("The address of a is %p\n", (void *)&a);
    printf("The value of ptr is %p\n",(void *) ptr);
    printf("The address of ptr is %p\n", &ptr);
    printf("The value pointed to by ptr is %d\n", *ptr);  // Dereferencing pointer to get the value of a

     return 0;
}