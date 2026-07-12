
#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    int n, i, choice;

    printf("=== Inventory Management System ===\n");
    printf("Enter number of items to store: ");
    scanf("%d", &n);

    struct Item items[n];
    int count = 0;

    do {
        printf("\n----- Menu -----\n");
        printf("1. Add item\n");
        printf("2. Display all items\n");
        printf("3. Update quantity\n");
        printf("4. Find total inventory value\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < n) {
                    items[count].id = count + 1;
                    printf("Enter item name: ");
                    scanf("%s", items[count].name);
                    printf("Enter quantity: ");
                    scanf("%d", &items[count].quantity);
                    printf("Enter price per unit: ");
                    scanf("%f", &items[count].price);
                    count++;
                    printf("Item added successfully.\n");
                } else {
                    printf("Inventory is full.\n");
                }
                break;
            case 2:
                printf("\n%-5s %-15s %-10s %-10s\n", "ID", "Name", "Quantity", "Price");
                for (i = 0; i < count; i++) {
                    printf("%-5d %-15s %-10d %-10.2f\n", items[i].id, items[i].name,
                           items[i].quantity, items[i].price);
                }
                break;
            case 3: {
                int itemId, newQty;
                printf("Enter item ID to update: ");
                scanf("%d", &itemId);
                if (itemId >= 1 && itemId <= count) {
                    printf("Enter new quantity: ");
                    scanf("%d", &newQty);
                    items[itemId - 1].quantity = newQty;
                    printf("Quantity updated successfully.\n");
                } else {
                    printf("Invalid item ID.\n");
                }
                break;
            }
            case 4: {
                float total = 0;
                for (i = 0; i < count; i++)
                    total += items[i].quantity * items[i].price;
                printf("Total inventory value: %.2f\n", total);
                break;
            }
            case 5:
                printf("Exiting inventory management system.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}
