
#include <stdio.h>

int main() {
    int arr[100];
    int n = 0, choice, i, j, temp, key, pos;

    printf("=== Menu-Driven Array Operations ===\n");

    do {
        printf("\n----- Menu -----\n");
        printf("1. Input array\n");
        printf("2. Display array\n");
        printf("3. Find sum and average\n");
        printf("4. Find largest and smallest\n");
        printf("5. Sort array (ascending)\n");
        printf("6. Search an element\n");
        printf("7. Reverse array\n");
        printf("8. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);
                printf("Enter %d elements: ", n);
                for (i = 0; i < n; i++)
                    scanf("%d", &arr[i]);
                break;
            case 2:
                printf("Array: ");
                for (i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;
            case 3: {
                int sum = 0;
                for (i = 0; i < n; i++)
                    sum += arr[i];
                printf("Sum = %d, Average = %.2f\n", sum, (float)sum / n);
                break;
            }
            case 4: {
                int maxVal = arr[0], minVal = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] > maxVal) maxVal = arr[i];
                    if (arr[i] < minVal) minVal = arr[i];
                }
                printf("Largest = %d, Smallest = %d\n", maxVal, minVal);
                break;
            }
            case 5:
                for (i = 0; i < n - 1; i++) {
                    for (j = 0; j < n - 1 - i; j++) {
                        if (arr[j] > arr[j + 1]) {
                            temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                printf("Array sorted successfully.\n");
                break;
            case 6:
                printf("Enter element to search: ");
                scanf("%d", &key);
                pos = -1;
                for (i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        pos = i;
                        break;
                    }
                }
                if (pos != -1)
                    printf("Element found at index %d\n", pos);
                else
                    printf("Element not found.\n");
                break;
            case 7:
                for (i = 0; i < n / 2; i++) {
                    temp = arr[i];
                    arr[i] = arr[n - 1 - i];
                    arr[n - 1 - i] = temp;
                }
                printf("Array reversed successfully.\n");
                break;
            case 8:
                printf("Exiting array operations system.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 8);

    return 0;
}
