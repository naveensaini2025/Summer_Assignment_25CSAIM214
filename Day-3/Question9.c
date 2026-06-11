#include <stdio.h>
int main()
{
    int n;
    printf("Enter an number to check prime: ");
    scanf("%d", &n);
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            printf("The number is not prime.");
            return 0;
        }
    }
    printf("The number is prime.");
    return 0;
}