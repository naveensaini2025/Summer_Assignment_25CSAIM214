#include <stdio.h>
int main() 
{
    int n,rem,arm=0,m;
    printf("Enter a number: ");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        rem=n%10;
        arm=arm+(rem*rem*rem);
        n=n/10;
    }
    if(m==arm)
        printf("The number is an Armstrong number.");
    else
        printf("The number is not an Armstrong number.");
    return 0;
}