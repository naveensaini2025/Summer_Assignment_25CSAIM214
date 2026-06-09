#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("Enter a  to find the sum of natural numbers: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        sum += i;
    }
    printf("The sum of natural numbers from 1 to %d is: %d\n", num, sum);
    return 0;
}