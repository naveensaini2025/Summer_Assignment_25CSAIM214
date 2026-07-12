
#include <stdio.h>

int main() {
    char str[200];
    int choice, i, length;

    printf("=== Menu-Driven String Operations ===\n");

    do {
        printf("\n----- Menu -----\n");
        printf("1. Input string\n");
        printf("2. Find length\n");
        printf("3. Reverse string\n");
        printf("4. Convert to uppercase\n");
        printf("5. Convert to lowercase\n");
        printf("6. Check palindrome\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                fgets(str, sizeof(str), stdin);
                for (i = 0; str[i] != '\0'; i++) {
                    if (str[i] == '\n') {
                        str[i] = '\0';
                        break;
                    }
                }
                break;
            case 2:
                length = 0;
                for (i = 0; str[i] != '\0'; i++)
                    length++;
                printf("Length: %d\n", length);
                break;
            case 3:
                length = 0;
                for (i = 0; str[i] != '\0'; i++)
                    length++;
                printf("Reversed: ");
                for (i = length - 1; i >= 0; i--)
                    printf("%c", str[i]);
                printf("\n");
                break;
            case 4:
                for (i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }
                printf("Uppercase: %s\n", str);
                break;
            case 5:
                for (i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'A' && str[i] <= 'Z')
                        str[i] = str[i] + 32;
                }
                printf("Lowercase: %s\n", str);
                break;
            case 6: {
                length = 0;
                for (i = 0; str[i] != '\0'; i++)
                    length++;
                int isPalindrome = 1;
                for (i = 0; i < length / 2; i++) {
                    if (str[i] != str[length - 1 - i]) {
                        isPalindrome = 0;
                        break;
                    }
                }
                if (isPalindrome)
                    printf("The string is a palindrome.\n");
                else
                    printf("The string is not a palindrome.\n");
                break;
            }
            case 7:
                printf("Exiting string operations system.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 7);

    return 0;
}
