#include <stdio.h>
int main()
{
    int a,b,x,y,rem,gcd;
    printf("Enter two numbers to calculate GCD: ");  
    scanf("%d%d",&a,&b);
    x=a;
    y=b;
    if(a==0)
    {
        gcd=b;
    }
    else if(b==0)
    {
        gcd=a;
    }
    else
    {
        while(y!=0)
        {
            rem=x%y;
            x=y;
            y=rem;
        }
        gcd=x;
    }
    printf("GCD of %d and %d is %d\n", a, b, gcd);
    return 0;
}