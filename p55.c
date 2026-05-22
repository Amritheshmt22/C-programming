// create a structure bank account name , account number and balance
// WAP to read acc no ,name ,balance and perform the following operations
// 1. deposit
// 2. withdraw
// 3. display balance
// using menu driven based

#include <stdio.h>
#include <string.h>
struct bank {
    int accno;
    char name[50];
    float balance;
};
int main(){
    struct bank b1;
    float amount;
    int choice;
    printf("Enter the account number, Name, Balance:");
    scanf("%d %s %f",&b1.accno,&b1.name,&b1.balance);   
    printf("\n1. Deposit\n2.Withdraw\nChoose :");       
    scanf("%d",&choice);
    if (choice ==1){
        printf("Enter the amount to deposit : ");
        scanf("%f",&amount);
        b1.balance += amount;
        printf("Balance after deposit : %f\n",b1.balance);
    }
    else if (choice ==2){
        printf("Enter the amount to withdraw : ");
        scanf("%f",&amount);
        if (amount < b1.balance){
            printf("Insufficient balance\n");
        }
        else{
            b1.balance -= amount;
            printf("Balance after withdrawal : %f\n",b1.balance);
        }
    }
    else{
        printf("Invalid choice\n");
    }
    return 0;
}   