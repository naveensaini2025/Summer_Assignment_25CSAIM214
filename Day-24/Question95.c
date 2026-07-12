
#include <stdio.h>

int main() {
    char str[200];
    char longest[200] = "";
    char current[200];
    int i, j = 0, k;
    int longestLen = 0, currentLen;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    i = 0;
    while (1) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            current[j] = '\0';
            currentLen = j;

            if (currentLen > longestLen) {
                longestLen = currentLen;
                for (k = 0; k <= currentLen; k++)
                    longest[k] = current[k];
            }

            j = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        } else {
            current[j] = str[i];
            j++;
        }
        i++;
    }

    printf("Longest word: %s (length %d)\n", longest, longestLen);

    return 0;
}
