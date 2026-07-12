
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    char combined[200];
    int len1 = 0, len2 = 0, i, j, k;
    int isRotation = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[len1] != '\0') {
        if (str1[len1] == '\n') { str1[len1] = '\0'; break; }
        len1++;
    }
    while (str2[len2] != '\0') {
        if (str2[len2] == '\n') { str2[len2] = '\0'; break; }
        len2++;
    }

    if (len1 != len2) {
        printf("The strings are not rotations of each other.\n");
        return 0;
    }

    for (i = 0; i < len1; i++)
        combined[i] = str1[i];
    for (i = 0; i < len1; i++)
        combined[len1 + i] = str1[i];
    combined[2 * len1] = '\0';

    for (i = 0; i <= len1; i++) {
        int matched = 1;
        for (j = 0; j < len2; j++) {
            if (combined[i + j] != str2[j]) {
                matched = 0;
                break;
            }
        }
        if (matched) {
            isRotation = 1;
            break;
        }
    }

    if (isRotation)
        printf("The strings are rotations of each other.\n");
    else
        printf("The strings are not rotations of each other.\n");

    return 0;
}
