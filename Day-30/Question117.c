
#include <stdio.h>

int main() {
    int n, i, j, choice;

    printf("=== Student Record System (Arrays and Strings) ===\n");
    printf("Enter number of students: ");
    scanf("%d", &n);

    char names[n][50];
    int rollNumbers[n];
    float marks[n];
    int count = 0;

    do {
        printf("\n----- Menu -----\n");
        printf("1. Add student record\n");
        printf("2. Display all records\n");
        printf("3. Search student by roll number\n");
        printf("4. Find topper\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < n) {
                    printf("Enter roll number: ");
                    scanf("%d", &rollNumbers[count]);
                    printf("Enter name: ");
                    scanf("%s", names[count]);
                    printf("Enter marks: ");
                    scanf("%f", &marks[count]);
                    count++;
                    printf("Record added successfully.\n");
                } else {
                    printf("Record list is full.\n");
                }
                break;
            case 2:
                printf("\n%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
                for (i = 0; i < count; i++) {
                    printf("%-10d %-20s %-10.2f\n", rollNumbers[i], names[i], marks[i]);
                }
                break;
            case 3: {
                int searchRoll, found = 0;
                printf("Enter roll number to search: ");
                scanf("%d", &searchRoll);
                for (i = 0; i < count; i++) {
                    if (rollNumbers[i] == searchRoll) {
                        printf("Found: %s, Marks: %.2f\n", names[i], marks[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Student not found.\n");
                break;
            }
            case 4: {
                if (count > 0) {
                    int topIndex = 0;
                    for (i = 1; i < count; i++) {
                        if (marks[i] > marks[topIndex])
                            topIndex = i;
                    }
                    printf("Topper: %s with marks %.2f\n", names[topIndex], marks[topIndex]);
                } else {
                    printf("No records available.\n");
                }
                break;
            }
            case 5:
                printf("Exiting student record system.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}
