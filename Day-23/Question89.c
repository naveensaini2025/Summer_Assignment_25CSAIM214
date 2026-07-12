
#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;
    int found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')
            freq[(unsigned char)str[i]]++;
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            continue;
        if (freq[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("No non-repeating character found.\n");

    return 0;
}
