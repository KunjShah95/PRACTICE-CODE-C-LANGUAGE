#include<stdio.h>
#include<string.h>
#define MAX 256
int main(){
    char str[1000];
    int count[MAX]={0};
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")]=0;
    for(i=0;str[i]!=0;i++){
        count[(unsigned char)str[i]]++;
    }
    printf("character occurences in the given string:\n");
    for(i=0;i<MAX;i++){
        if(count[i]>0){
            printf("%c: %d\n", i, count[i]);
        }   
    }
     return 0;
}