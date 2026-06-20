#include<stdio.h>
int perfnum()
{
    int n , temp=0;
    printf("enter number to check if perfect number or not: ");
    scanf("%d",&n);
    for (int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            temp=temp+i;
        }
    }
    if(n==temp)
    {
        printf("%d is a perfect number",n);
    }
    return 0;
}
int main()
{
    perfnum();
    return 0;
}