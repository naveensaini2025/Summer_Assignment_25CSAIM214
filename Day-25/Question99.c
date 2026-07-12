
#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Enter number of names: ");
    scanf("%d", &n);

    char names[n][50];

    getchar();

    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) {
        fgets(names[i], 50, stdin);
        
        for (j = 0; names[i][j] != '\0'; j++) {
            if (names[i][j] == '\n') {
                names[i][j] = '\0';
                break;
            }
        }
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            int shouldSwap = 0;
            k = 0;

            while (names[j][k] != '\0' && names[j + 1][k] != '\0') {
                if (names[j][k] > names[j + 1][k]) {
                    shouldSwap = 1;
                    break;
                } else if (names[j][k] < names[j + 1][k]) {
                    shouldSwap = 0;
                    break;
                }
                k++;
            }

            if (shouldSwap) {
                char temp[50];
                int t;
                for (t = 0; names[j][t] != '\0'; t++)
                    temp[t] = names[j][t];
                temp[t] = '\0';

                for (t = 0; names[j + 1][t] != '\0'; t++)
                    names[j][t] = names[j + 1][t];
                names[j][t] = '\0';

                for (t = 0; temp[t] != '\0'; t++)
                    names[j + 1][t] = temp[t];
                names[j + 1][t] = '\0';
            }
        }
    }

    printf("Names sorted alphabetically:\n");
    for (i = 0; i < n; i++)
        printf("%s\n", names[i]);

    return 0;
}
