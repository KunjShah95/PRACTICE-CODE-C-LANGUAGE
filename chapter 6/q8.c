#include<stdio.h>
void convertToUpperCase(char *str){
    while(*str){
        if(*str >= 'a' && *str <= 'z'){
            *str = *str - 'a' + 'A';
        }
        str++;
    }
}
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    convertToUpperCase(str);
    printf("Uppercase String:%s\n",str);

     return 0;
}