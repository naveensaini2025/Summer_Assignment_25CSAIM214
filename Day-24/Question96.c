
#include <stdio.h>

int main() {
    char str[100];
    char result[100];
    int seen[256] = {0};
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (ch == '\n')
            continue;
        if (!seen[ch]) {
            result[j] = ch;
            j++;
            seen[ch] = 1;
        }
    }
    result[j] = '\0';

    printf("String after removing duplicates: %s\n", result);

    return 0;
}
