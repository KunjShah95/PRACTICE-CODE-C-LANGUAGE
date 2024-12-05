#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[100],substr[100];
    int m,n,i,length;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")]=0;
    printf("Enter the starting postion(m):");
    scanf("%d",&m);
    printf("Enter the numbers of characters(n):");
    scanf("%d",&n);
    length=strlen(str);
    if(m<0|| m>=length){
        printf("Invalid starting position.\n");
            return 1;
        }
    if (n<0|| m+n>length){
        printf("Invalid number of characters to extract.\n");
        return 1;
    }
    for(i=0;i<n && (m+i)<length;i++){
        substr[i]=str[m+i];
    }
    substr[i]='\0';
    printf("Extracted substring: %s\n",substr);
     return 0;
}