#include <stdio.h>
#include <math.h>
int main()
{
    int n,dec=0,i=0;
    printf("Enter the binary number: ");
    scanf("%d",&n);
    while(n>0)
    {
        if(n%10!=1&&n%10!=0)
        {
            printf("Invalid binary number");
            return 0;
        }
        else
        {
            dec=dec+(n%10)*pow(2,i) ;
            n=n/10;
            i++;
        }
    }
    printf("Decimal equivalent: %d", dec);
    return 0;
}