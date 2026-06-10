#include <stdio.h>
int main()
{
    int n,prod=1;
    printf("Enter an number to print product of digits: ");
    scanf("%d", &n);
    while (n != 0)
    {
        prod = prod * (n % 10);
        n = n / 10;
    }
    printf("Product of digits: %d", prod);
        return 0;
}