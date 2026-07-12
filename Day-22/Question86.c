
#include <stdio.h>

int main() {
    char str[200];
    int i, wordCount = 0;
    int insideWord = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            if (insideWord == 0) {
                wordCount++;
                insideWord = 1;
            }
        } else {
            insideWord = 0;
        }
    }

    printf("Number of words: %d\n", wordCount);

    return 0;
}
