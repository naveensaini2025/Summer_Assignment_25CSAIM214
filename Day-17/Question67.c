
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

    int result[n1];
    int count = 0;

    for (i = 0; i < n1; i++) {
        int presentInSecond = 0;
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                presentInSecond = 1;
                break;
            }
        }

        if (presentInSecond) {
            int alreadyAdded = 0;
            for (k = 0; k < count; k++) {
                if (result[k] == arr1[i]) {
                    alreadyAdded = 1;
                    break;
                }
            }
            if (!alreadyAdded) {
                result[count] = arr1[i];
                count++;
            }
        }
    }

    printf("Intersection of arrays: ");
    for (k = 0; k < count; k++)
        printf("%d ", result[k]);
    printf("\n");

    return 0;
}
