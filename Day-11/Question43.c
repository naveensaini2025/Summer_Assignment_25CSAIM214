#include<stdio.h>
int prime(int n)
{
    int i;
    
    for (i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter the number to check prime or not : ");
    scanf("%d",&n);
    if (prime(n))
    {
        printf("%d is prime number",n);
    }
    else
    {
        printf("%d is prime not number",n);
    }
    return 0;
}