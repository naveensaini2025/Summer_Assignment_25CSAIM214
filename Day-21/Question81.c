
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')
            length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
