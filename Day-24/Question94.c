
#include <stdio.h>

int main() {
    char str[100];
    char result[200];
    int i, j = 0;
    int count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    i = 0;
    while (str[i] != '\0') {
        char current = str[i];
        count = 1;

        while (str[i + 1] == current) {
            count++;
            i++;
        }

        result[j] = current;
        j++;

        if (count > 1) {
            char digits[10];
            int d = 0;
            int num = count;

            if (num == 0) {
                digits[d++] = '0';
            } else {
                while (num > 0) {
                    digits[d++] = (num % 10) + '0';
                    num = num / 10;
                }
            }

            while (d > 0) {
                d--;
                result[j] = digits[d];
                j++;
            }
        }

        i++;
    }
    result[j] = '\0';

    printf("Compressed string: %s\n", result);

    return 0;
}
