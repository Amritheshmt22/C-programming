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
    scanf("%d %s %f", &b1.accno, b1.name, &b1.balance); // Removed '&' from b1.name array
    
    do {
        printf("\n1. Deposit\n2. Withdraw\n3. Display Balance\n4. Exit\nChoose : ");       
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter the amount to deposit : ");
                scanf("%f", &amount);
                b1.balance += amount;
                printf("Balance after deposit : %.2f\n", b1.balance);
                break;
            case 2:
                printf("Enter the amount to withdraw : ");
                scanf("%f", &amount);
                if (amount > b1.balance) { // Fixed: was previously amount < b1.balance
                    printf("Insufficient balance\n");
                } else {
                    b1.balance -= amount;
                    printf("Balance after withdrawal : %.2f\n", b1.balance);
                }
                break;
            case 3:
                printf("Current balance : %.2f\n", b1.balance);
                break;
            case 4:
                printf("Exiting... Thank you!\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}   






