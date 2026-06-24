#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n (array contains numbers from 1 to n with one missing): ");
    int expected_sum = n * (n + 1) / 2;
    int sum = 0;
    printf("Enter %d numbers:\n", n - 1);
    for (int i = 0; i < n - 1; i++) 
    {
        int value;
        scanf("%d",&value);
        sum += value;
    }

    int missing = expected_sum - sum;
    printf("Missing number: %d\n", missing);
    return 0;
}
