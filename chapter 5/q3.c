#include<stdio.h>
struct Bank{
        int acc_no;
        char name[20];
        float balance;
    };
    
int main(){
    int n,i;
    printf("Enter the number of accounts: ");
    scanf("%d",&n);
    struct Bank arr[n];
    for(i=0;i<n;i++){
        printf("Enter account number: ");
        scanf("%d",&arr[i].acc_no);
        printf("Enter name: ");
        scanf("%s",&arr[i].name); 
        printf("Enter balance: ");
        scanf("%f",&arr[i].balance);
    }
    for(i=0;i<n;i++){
        printf("Account number: %d\n",arr[i].acc_no);
        printf("Name: %s\n",arr[i].name);
        printf("Balance: %f\n",arr[i].balance);
    }
     return 0;
}