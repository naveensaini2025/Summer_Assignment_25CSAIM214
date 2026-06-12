#include <stdio.h>
int arm(int n)
{
    int rem, arm = 0,m=n;
    while(n > 0)
    {
        rem = n % 10;
        arm = arm + (rem * rem * rem);
        n = n / 10;
    }
    if(arm == m)
        return 1;
    else
        return 0;
    
}
int main()
{
    int l,h,i,n;
    printf("Enter lower limit of range : ");
    scanf("%d", &l);
    printf("Enter upper limit of range : ");
    scanf("%d", &h);
    for(i=l;i<=h;i++)
    {
        if(arm(i))
            printf("%d\t", i);
    }
    return 0;
}
