#include <stdio.h>
int power(int x, int y)
{
    if (y == 0)
        return 1;
    else
        return x * power(x, y - 1);
}
int main()
{
    int x, y;
    printf("Enter the base: ");
    scanf("%d", &x);
    printf("Enter the exponent: ");
    scanf("%d", &y);
    printf("Result: %d", power(x, y));
    return 0;
}