#include<stdio.h>

int main(){
    int a[10],i,pos,size,item=0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements of an array:" );
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position where you want to  search an element : ");
    scanf("%d",&pos);
    printf("Enter the element you want to insert : ");
    scanf("%d",&item);
    a[pos]=item;
    for(i=0;i<size;i++){
        printf("%d\n ",a[i]);
    }
     return 0;
}