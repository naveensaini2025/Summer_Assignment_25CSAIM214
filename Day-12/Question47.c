#include <stdio.h>
int fibo()
{
    int n,a=0,b=1,c,i;
    printf("enter no. of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series:\n");
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("%d\t",a);
        }
        printf("%d\t",a+b);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}

int main()
{
    fibo();
    return 0;
}