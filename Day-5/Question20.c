#include <stdio.h>
int prime(int n)
{
    int i,flag=1;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int main()
{
    int n,i,big=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("No prime factors for %d.", n);
        return 0;
    }
    if (n==2)
    {
        printf("The largest prime factor of %d is 2.", n);
        return 0;
    }
    for(i=1; i<=n/2; i++)
    {
        if(prime(i) && n%i==0)
        {
            big=i;
        }
    }
    if (big!=0)
        printf("The largest prime factor of %d is %d.", n, big);
    return 0;
}