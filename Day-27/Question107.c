
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float allowance;
    float deduction;
    float netSalary;
};

int main() {
    int n, i;

    printf("=== Salary Management System ===\n");
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Basic Salary: ");
        scanf("%f", &employees[i].basicSalary);

        printf("Allowance: ");
        scanf("%f", &employees[i].allowance);

        printf("Deduction: ");
        scanf("%f", &employees[i].deduction);

        employees[i].netSalary = employees[i].basicSalary + employees[i].allowance - employees[i].deduction;
    }

    printf("\n----- Salary Slip -----\n");
    printf("%-6s %-15s %-10s %-10s %-10s %-10s\n", "ID", "Name", "Basic", "Allow", "Deduct", "Net");
    for (i = 0; i < n; i++) {
        printf("%-6d %-15s %-10.2f %-10.2f %-10.2f %-10.2f\n",
               employees[i].id, employees[i].name, employees[i].basicSalary,
               employees[i].allowance, employees[i].deduction, employees[i].netSalary);
    }

    return 0;
}
