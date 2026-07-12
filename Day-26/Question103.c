
#include <stdio.h>

int main() {
    double balance = 5000.0; 
    int choice;
    double amount;
    int pin, enteredPin;

    pin = 1234; 

    printf("=== ATM Simulation ===\n");
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN. Exiting.\n");
        return 0;
    }

    do {
        printf("\n----- ATM Menu -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: %.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful. New balance: %.2f\n", balance);
                } else {
                    printf("Invalid amount.\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful. New balance: %.2f\n", balance);
                } else {
                    printf("Invalid amount or insufficient balance.\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
