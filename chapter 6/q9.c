#include<stdio.h>
int findMax(int *array,int size){
    int max = array[0];
    for(int i=1;i<size;i++){
        if(array[i]>max){
        max=array[i];
        }
    }
    return max;
}
int main(){
    int numbers[]={10,55,35,42,90,23,87};
    int max,size;
    size = sizeof(numbers)/sizeof(numbers[0]);
    max = findMax(numbers,size);
    printf("The maximum number in the array is: %d\n",max);
     return 0;
}