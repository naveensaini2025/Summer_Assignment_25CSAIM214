
#include <stdio.h>

int main() {
    int age;
    char citizen;

    printf("=== Voting Eligibility System ===\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a citizen of this country? (y/n): ");
    scanf(" %c", &citizen);

    if (age >= 18 && (citizen == 'y' || citizen == 'Y')) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
        if (age < 18)
            printf("Reason: Age is below 18.\n");
        if (citizen != 'y' && citizen != 'Y')
            printf("Reason: Not a citizen.\n");
    }

    return 0;
}
