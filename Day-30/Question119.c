
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n, i, choice;

    printf("=== Mini Employee Management System ===\n");
    printf("Enter number of employees to store: ");
    scanf("%d", &n);

    struct Employee employees[n];
    int count = 0;

    do {
        printf("\n----- Menu -----\n");
        printf("1. Add employee\n");
        printf("2. Display all employees\n");
        printf("3. Find highest paid employee\n");
        printf("4. Find average salary\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < n) {
                    employees[count].id = count + 1;
                    printf("Enter name: ");
                    scanf("%s", employees[count].name);
                    printf("Enter salary: ");
                    scanf("%f", &employees[count].salary);
                    count++;
                    printf("Employee added successfully.\n");
                } else {
                    printf("Employee list is full.\n");
                }
                break;
            case 2:
                printf("\n%-5s %-15s %-10s\n", "ID", "Name", "Salary");
                for (i = 0; i < count; i++) {
                    printf("%-5d %-15s %-10.2f\n", employees[i].id, employees[i].name, employees[i].salary);
                }
                break;
            case 3: {
                if (count > 0) {
                    int maxIndex = 0;
                    for (i = 1; i < count; i++) {
                        if (employees[i].salary > employees[maxIndex].salary)
                            maxIndex = i;
                    }
                    printf("Highest paid: %s with salary %.2f\n", employees[maxIndex].name, employees[maxIndex].salary);
                } else {
                    printf("No employees available.\n");
                }
                break;
            }
            case 4: {
                if (count > 0) {
                    float total = 0;
                    for (i = 0; i < count; i++)
                        total += employees[i].salary;
                    printf("Average salary: %.2f\n", total / count);
                } else {
                    printf("No employees available.\n");
                }
                break;
            }
            case 5:
                printf("Exiting mini employee management system.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}
