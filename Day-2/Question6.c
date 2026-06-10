#include <stdio.h>
int main()
{
    int n, rev=0, rem;
    printf("Enter an number to print reverse: ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("Reverse number: %d", rev);
    return 0;
}