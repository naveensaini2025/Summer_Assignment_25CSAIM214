
#include <stdio.h>

int main() {
    int n1, n2, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements: ", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements: ", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    int result[n1 + n2];
    int count = 0;

    for (i = 0; i < n1; i++) {
        int found = 0;
        for (j = 0; j < count; j++) {
            if (result[j] == arr1[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[count] = arr1[i];
            count++;
        }
    }

    for (i = 0; i < n2; i++) {
        int found = 0;
        for (j = 0; j < count; j++) {
            if (result[j] == arr2[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[count] = arr2[i];
            count++;
        }
    }

    printf("Union of arrays: ");
    for (k = 0; k < count; k++)
        printf("%d ", result[k]);
    printf("\n");

    return 0;
}
