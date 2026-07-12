
#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;
    int printedAlready[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')
            freq[(unsigned char)str[i]]++;
    }

    printf("Character frequencies:\n");
    for (i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (ch != '\n' && ch != ' ' && !printedAlready[ch]) {
            printf("'%c' : %d\n", ch, freq[ch]);
            printedAlready[ch] = 1;
        }
    }

    return 0;
}
