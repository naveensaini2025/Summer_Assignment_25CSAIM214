#include <stdio.h>
int pal()
{
    int n,temp,rev=0,rem;
    printf("Enter the no. to check pallindriome: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (temp==rev)
    printf("%d is a pallindrome",temp);
    else
    printf("%d is not a pallindrome",temp);
    return 0;
}
int main()
{
    pal();
    return 0;
}