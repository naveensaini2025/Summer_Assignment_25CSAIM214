#include <stdio.h>
int rev(int n,int r)
{
    if (n==0)
    {
        return r;
    }
    r=r*10+n%10;
    return rev(n/10,r);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reverse of %d is %d",n, rev(n,0));
    return 0;
}