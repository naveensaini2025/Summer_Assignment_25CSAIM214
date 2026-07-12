
#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    int n, i, choice;

    printf("=== Contact Management System ===\n");
    printf("Enter number of contacts to store: ");
    scanf("%d", &n);

    struct Contact contacts[n];
    int count = 0;

    do {
        printf("\n----- Menu -----\n");
        printf("1. Add contact\n");
        printf("2. Display all contacts\n");
        printf("3. Search contact by name\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < n) {
                    printf("Enter name: ");
                    scanf("%s", contacts[count].name);
                    printf("Enter phone number: ");
                    scanf("%s", contacts[count].phone);
                    count++;
                    printf("Contact added successfully.\n");
                } else {
                    printf("Contact list is full.\n");
                }
                break;
            case 2:
                printf("\n%-20s %-15s\n", "Name", "Phone");
                for (i = 0; i < count; i++) {
                    printf("%-20s %-15s\n", contacts[i].name, contacts[i].phone);
                }
                break;
            case 3: {
                char searchName[50];
                int found = 0;
                printf("Enter name to search: ");
                scanf("%s", searchName);

                for (i = 0; i < count; i++) {
                    
                    int j = 0, match = 1;
                    while (contacts[i].name[j] != '\0' && searchName[j] != '\0') {
                        if (contacts[i].name[j] != searchName[j]) {
                            match = 0;
                            break;
                        }
                        j++;
                    }
                    if (match && contacts[i].name[j] == '\0' && searchName[j] == '\0') {
                        printf("Found: %s - %s\n", contacts[i].name, contacts[i].phone);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Contact not found.\n");
                break;
            }
            case 4:
                printf("Exiting contact management system.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
