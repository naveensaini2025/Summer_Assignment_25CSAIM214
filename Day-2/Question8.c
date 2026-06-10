#include <stdio.h>
int main()
{
    int n,rev=0,rem,temp;
    printf("Enter an number to check pallindrome: ");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (temp == rev)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");
    return 0;
}