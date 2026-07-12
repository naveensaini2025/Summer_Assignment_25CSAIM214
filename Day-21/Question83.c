
#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
