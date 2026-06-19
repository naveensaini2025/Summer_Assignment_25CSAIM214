#include <stdio.h>
int sum (int a,int b)
{
    int sum;
    sum=a+b;
    printf("sum of %d and %d is %d",a,b,sum);
}
int main()
{
    int a,b;
    printf("enter two numbers to find sum: ");
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
}