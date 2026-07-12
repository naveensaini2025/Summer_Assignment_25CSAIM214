
#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;
    int maxCount = 0;
    char maxChar = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')
            freq[(unsigned char)str[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxChar = (char)i;
        }
    }

    printf("Maximum occurring character: '%c' (%d times)\n", maxChar, maxCount);

    return 0;
}
