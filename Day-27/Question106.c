
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main() {
    int n, i;

    printf("=== Employee Management System ===\n");
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Department: ");
        scanf("%s", employees[i].department);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\n----- Employee Records -----\n");
    printf("%-6s %-15s %-15s %-10s\n", "ID", "Name", "Department", "Salary");
    for (i = 0; i < n; i++) {
        printf("%-6d %-15s %-15s %-10.2f\n", employees[i].id, employees[i].name,
               employees[i].department, employees[i].salary);
    }

    return 0;
}
