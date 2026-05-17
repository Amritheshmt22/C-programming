//WAP to implement a menu-based Simple banking system where the user can deposit money, withdraw money, check balance and exit the program.

#include <stdio.h>
//Function declarations
void showMenu();
void deposit(float *balance);
void withdraw(float *balance);
void checkBalance(float balance);

int main() {
    float balance = 0.0;
    int choice;
    while(1){
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                deposit(&balance);
                break;
            case 2:
                withdraw(&balance);
                break;
            case 3:
                checkBalance(balance);
                break;
            case 4:
                printf("Thank you for using our banking system. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}                                   
void showMenu() 
        {
            printf("\nSimple Banking System Menu:\n");
            printf("1. Deposit Money\n");
            printf("2. Withdraw Money\n");
            printf("3. Check Balance\n");
            printf("4. Exit\n");
        }
        void deposit(float *balance) {
            float amount;
            printf("Enter the amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0) {
                *balance += amount;
                printf("Amount deposited successfully. Current balance: %.2f\n", *balance);
            } else {
                printf("Invalid amount. Please enter a positive value.\n");
            }
        }
        void withdraw(float *balance) {
            float amount;
            printf("Enter the amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > 0 && amount <= *balance) {
                *balance -= amount;
                printf("Amount withdrawn successfully. Current balance: %.2f\n", *balance);
            } else {
                printf("Invalid amount or insufficient balance.\n");
            }
        }
        void checkBalance(float balance) {
            printf("Your current balance is: %.2f\n", balance);
            scanf("%*c"); // Clear the input buffer
            if (balance < 100) {
                printf("Warning: Your balance is low. Please consider depositing more money.\n");
            }

        }


