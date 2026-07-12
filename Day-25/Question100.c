
#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Enter number of words: ");
    scanf("%d", &n);

    char words[n][50];
    int lengths[n];

    getchar();

    printf("Enter %d words:\n", n);
    for (i = 0; i < n; i++) {
        fgets(words[i], 50, stdin);
        for (j = 0; words[i][j] != '\0'; j++) {
            if (words[i][j] == '\n') {
                words[i][j] = '\0';
                break;
            }
        }
        
        lengths[i] = 0;
        for (j = 0; words[i][j] != '\0'; j++)
            lengths[i]++;
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (lengths[j] > lengths[j + 1]) {
                int tempLen = lengths[j];
                lengths[j] = lengths[j + 1];
                lengths[j + 1] = tempLen;

                char temp[50];
                for (k = 0; words[j][k] != '\0'; k++)
                    temp[k] = words[j][k];
                temp[k] = '\0';

                for (k = 0; words[j + 1][k] != '\0'; k++)
                    words[j][k] = words[j + 1][k];
                words[j][k] = '\0';

                for (k = 0; temp[k] != '\0'; k++)
                    words[j + 1][k] = temp[k];
                words[j + 1][k] = '\0';
            }
        }
    }

    printf("Words sorted by length:\n");
    for (i = 0; i < n; i++)
        printf("%s (length %d)\n", words[i], lengths[i]);

    return 0;
}
