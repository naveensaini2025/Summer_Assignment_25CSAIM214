#include <stdio.h>
#include <stlib.h>
int main() 
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 5, 5, 6};
    int n = sizeof(arr) / 4;
    int *unique=malloc(sizeof(arr));
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int found = 0;
        for (int j = 0; j < count; j++) 
        {
            if (arr[i] == unique[j]) 
            {
                found = 1;
                break;
            }
        }
        if (!found) {
            unique[count++] = arr[i];
        }
    }
    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\nArray after removing duplicates: ");
    for (int i = 0; i < count; i++) 
    {
        printf("%d ", unique[i]);
    }
    printf("\n");
    
    return 0;
}
