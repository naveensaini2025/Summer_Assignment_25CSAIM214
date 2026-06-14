#include<stdio.h>
int main()
{
    int n,bin[100],b=0,c=0;
    printf("Enter the number to convert: ");
    scanf("%d",&n);
    while(n>0)
    {
        bin[c]=n%2;
        n=n/2;
        c++;
    }
    for(int i=c-1;i>=0;i--)
    {
        b=b*10+bin[i];
    }
    printf("Binary equivalent: %d",b);
    return 0;
}