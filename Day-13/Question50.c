#include<stdio.h>
int main()
{
    int a[]={5,6,7,8,9,32,6};//let it be a sample array
    int i,sum=0;
    for (i=0;i<(sizeof(a)/4);i++)
    {
        sum=sum+a[i];
    }
    printf("sum of array elements is %d",sum);
    return 0;
}