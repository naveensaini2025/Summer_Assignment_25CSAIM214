
#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    int available; 
};

int main() {
    int n, i, choice;

    printf("=== Mini Library System ===\n");
    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book books[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter title of book %d: ", i + 1);
        scanf(" %[^\n]", books[i].title);
        printf("Enter author of book %d: ", i + 1);
        scanf(" %[^\n]", books[i].author);
        books[i].available = 1;
    }

    do {
        printf("\n----- Menu -----\n");
        printf("1. Display all books\n");
        printf("2. Search book by title\n");
        printf("3. Issue book\n");
        printf("4. Return book\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("\n%-20s %-20s %-10s\n", "Title", "Author", "Status");
                for (i = 0; i < n; i++) {
                    printf("%-20s %-20s %-10s\n", books[i].title, books[i].author,
                           books[i].available ? "Available" : "Issued");
                }
                break;
            case 2: {
                char searchTitle[50];
                int found = 0;
                printf("Enter title to search: ");
                fgets(searchTitle, sizeof(searchTitle), stdin);
                for (i = 0; searchTitle[i] != '\0'; i++) {
                    if (searchTitle[i] == '\n') { searchTitle[i] = '\0'; break; }
                }
                for (i = 0; i < n; i++) {
                    int j = 0, match = 1;
                    while (books[i].title[j] != '\0' && searchTitle[j] != '\0') {
                        if (books[i].title[j] != searchTitle[j]) { match = 0; break; }
                        j++;
                    }
                    if (match && books[i].title[j] == '\0' && searchTitle[j] == '\0') {
                        printf("Found: %s by %s (%s)\n", books[i].title, books[i].author,
                               books[i].available ? "Available" : "Issued");
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Book not found.\n");
                break;
            }
            case 3: {
                int idx;
                printf("Enter book number to issue (1-%d): ", n);
                scanf("%d", &idx);
                if (idx >= 1 && idx <= n) {
                    if (books[idx - 1].available) {
                        books[idx - 1].available = 0;
                        printf("Book issued successfully.\n");
                    } else {
                        printf("Book already issued.\n");
                    }
                } else {
                    printf("Invalid book number.\n");
                }
                break;
            }
            case 4: {
                int idx;
                printf("Enter book number to return (1-%d): ", n);
                scanf("%d", &idx);
                if (idx >= 1 && idx <= n) {
                    if (!books[idx - 1].available) {
                        books[idx - 1].available = 1;
                        printf("Book returned successfully.\n");
                    } else {
                        printf("Book was not issued.\n");
                    }
                } else {
                    printf("Invalid book number.\n");
                }
                break;
            }
            case 5:
                printf("Exiting mini library system.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}
