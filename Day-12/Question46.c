#include<stdio.h>
int arm()
{
    int n,a=0,temp,rem;
    printf("enter the no. to check armstrong: ");
    scanf("%d",&n);
    temp=n;
    while (n)
    {
        rem=n%10;
        a=a+(rem*rem*rem);
        n=n/10;
    }
    if (a==temp)
        printf("%d is a armstrong number.",temp);
    else
        printf("%d is not a armstrong number.",temp);
    return 0;
}
int main()
{
    arm();
    return 0;
}