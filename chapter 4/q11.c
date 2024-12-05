#include<stdio.h>
#include<string.h>
int main()
{
    char a[10]="kunj";
    int i,j;
for(i=0, j=strlen(a)-1; i<j; i++, j--){
        char temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("%s",a);
    return 0;
}