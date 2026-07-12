
#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int isIssued; 
};

int main() {
    int n, i, choice, bookIndex;

    printf("=== Library Management System ===\n");
    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book books[n];

    for (i = 0; i < n; i++) {
        books[i].id = i + 1;
        printf("\nEnter title of book %d: ", i + 1);
        scanf(" %[^\n]", books[i].title);
        printf("Enter author of book %d: ", i + 1);
        scanf(" %[^\n]", books[i].author);
        books[i].isIssued = 0;
    }

    do {
        printf("\n----- Library Menu -----\n");
        printf("1. Display all books\n");
        printf("2. Issue a book\n");
        printf("3. Return a book\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n%-5s %-20s %-20s %-10s\n", "ID", "Title", "Author", "Status");
                for (i = 0; i < n; i++) {
                    printf("%-5d %-20s %-20s %-10s\n", books[i].id, books[i].title,
                           books[i].author, books[i].isIssued ? "Issued" : "Available");
                }
                break;
            case 2:
                printf("Enter book ID to issue: ");
                scanf("%d", &bookIndex);
                bookIndex--;
                if (bookIndex >= 0 && bookIndex < n) {
                    if (books[bookIndex].isIssued == 0) {
                        books[bookIndex].isIssued = 1;
                        printf("Book issued successfully.\n");
                    } else {
                        printf("Book is already issued.\n");
                    }
                } else {
                    printf("Invalid book ID.\n");
                }
                break;
            case 3:
                printf("Enter book ID to return: ");
                scanf("%d", &bookIndex);
                bookIndex--;
                if (bookIndex >= 0 && bookIndex < n) {
                    if (books[bookIndex].isIssued == 1) {
                        books[bookIndex].isIssued = 0;
                        printf("Book returned successfully.\n");
                    } else {
                        printf("Book was not issued.\n");
                    }
                } else {
                    printf("Invalid book ID.\n");
                }
                break;
            case 4:
                printf("Exiting library system.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
