
#include <stdio.h>

#define MAX_STUDENTS 100

struct Student {
    int rollNo;
    char name[50];
    float marks[3];
    float total;
    float average;
    char grade;
};

struct Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent();
void displayAllStudents();
void searchStudent();
void calculateResult(struct Student *s);
void findTopper();
int stringsEqualIgnoreCase(char a[], char b[]);

int main() {
    int choice;

    printf("=== Student Management Mini Project ===\n");

    do {
        printf("\n----- Main Menu -----\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Name\n");
        printf("4. Find Topper\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayAllStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                findTopper();
                break;
            case 5:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Student list is full.\n");
        return;
    }

    struct Student *s = &students[studentCount];

    printf("Enter roll number: ");
    scanf("%d", &s->rollNo);

    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter marks for 3 subjects:\n");
    for (int i = 0; i < 3; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &s->marks[i]);
    }

    calculateResult(s);
    studentCount++;

    printf("Student added successfully.\n");
}

void calculateResult(struct Student *s) {
    s->total = 0;
    for (int i = 0; i < 3; i++)
        s->total += s->marks[i];

    s->average = s->total / 3;

    if (s->average >= 90)
        s->grade = 'A';
    else if (s->average >= 75)
        s->grade = 'B';
    else if (s->average >= 60)
        s->grade = 'C';
    else if (s->average >= 40)
        s->grade = 'D';
    else
        s->grade = 'F';
}

void displayAllStudents() {
    if (studentCount == 0) {
        printf("No student records found.\n");
        return;
    }

    printf("\n%-10s %-20s %-10s %-10s %-8s\n", "Roll No", "Name", "Total", "Average", "Grade");
    for (int i = 0; i < studentCount; i++) {
        printf("%-10d %-20s %-10.2f %-10.2f %-8c\n",
               students[i].rollNo, students[i].name,
               students[i].total, students[i].average, students[i].grade);
    }
}

int stringsEqualIgnoreCase(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        char ca = a[i], cb = b[i];
        if (ca >= 'A' && ca <= 'Z') ca += 32;
        if (cb >= 'A' && cb <= 'Z') cb += 32;
        if (ca != cb) return 0;
        i++;
    }
    return (a[i] == '\0' && b[i] == '\0');
}

void searchStudent() {
    char searchName[50];
    int found = 0;

    printf("Enter name to search: ");
    scanf("%s", searchName);

    for (int i = 0; i < studentCount; i++) {
        if (stringsEqualIgnoreCase(students[i].name, searchName)) {
            printf("Found: Roll No %d, %s, Average %.2f, Grade %c\n",
                   students[i].rollNo, students[i].name,
                   students[i].average, students[i].grade);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found.\n");
}

void findTopper() {
    if (studentCount == 0) {
        printf("No student records found.\n");
        return;
    }

    int topIndex = 0;
    for (int i = 1; i < studentCount; i++) {
        if (students[i].average > students[topIndex].average)
            topIndex = i;
    }

    printf("Topper: %s (Roll No %d) with average %.2f and grade %c\n",
           students[topIndex].name, students[topIndex].rollNo,
           students[topIndex].average, students[topIndex].grade);
}
