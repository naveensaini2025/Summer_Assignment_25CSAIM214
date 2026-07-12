
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n, i;

    printf("=== Student Record Management System ===\n");
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &students[i].rollNo);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n----- Student Records -----\n");
    printf("%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    for (i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f\n", students[i].rollNo, students[i].name, students[i].marks);
    }

    return 0;
}
