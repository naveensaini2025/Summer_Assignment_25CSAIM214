
#include <stdio.h>

int main() {
    double balance = 0.0;
    int choice;
    double amount;

    printf("=== Bank Account System ===\n");

    do {
        printf("\n----- Bank Menu -----\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposited successfully. Balance: %.2f\n", balance);
                } else {
                    printf("Invalid amount.\n");
                }
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawn successfully. Balance: %.2f\n", balance);
                } else {
                    printf("Invalid amount or insufficient balance.\n");
                }
                break;
            case 3:
                printf("Current balance: %.2f\n", balance);
                break;
            case 4:
                printf("Thank you for banking with us.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
