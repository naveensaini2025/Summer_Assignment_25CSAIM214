
#include <stdio.h>

int main() {
    int n, i, j, isSymmetric = 1;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
