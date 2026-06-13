#include <stdio.h>
int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
int main ()
{
    int n,rem,temp,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n>0)
    {
        rem = n % 10;
        n = n / 10;
        sum = sum + fact(rem);
    }
    if (sum == temp)
        printf("%d is a strong number.", temp);
    else
        printf("%d is not a strong number.", temp);
    return 0;
}