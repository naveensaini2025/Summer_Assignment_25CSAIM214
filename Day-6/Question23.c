#include<stdio.h>
int main()
{
    int n,bin[100],i=0,set_bits=0;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    while(n>0)
    {
        bin[i]=n%2;
        if(bin[i]==1)
        {
            set_bits++;
        }
        n=n/2;
        i++;
    }
    printf("Number of set bits: %d",set_bits);
    return 0;
}