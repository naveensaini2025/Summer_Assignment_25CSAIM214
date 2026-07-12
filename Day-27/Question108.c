
#include <stdio.h>

int main() {
    char name[50];
    int rollNo;
    int numSubjects, i;

    printf("=== Marksheet Generation System ===\n");

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter roll number: ");
    scanf("%d", &rollNo);

    printf("Enter number of subjects: ");
    scanf("%d", &numSubjects);

    int marks[numSubjects];
    int total = 0;

    for (i = 0; i < numSubjects; i++) {
        printf("Enter marks for subject %d (out of 100): ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    float percentage = (float)total / numSubjects;

    char grade;
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\n----- Marksheet -----\n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", rollNo);
    printf("Total Marks: %d out of %d\n", total, numSubjects * 100);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
