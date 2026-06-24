#include<stdio.h>
int main()
{
    int a[]={5,6,5,7,8,9,32,6};//let it be a sample array
    int s=sizeof(a)/4;
    int n=s-1;
    printf("Array before reverse : ");
    for (int i=0;i<s;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    if(s%2==0)
    {
        for (int i=0;i<s/2;i++)
        {
             
                a[i]=a[i]+a[n]-(a[n]=a[i]);
                n--;
           
        }
        printf("\n");
    }
    printf("Array after reverse : ");
    for (int i=0;i<s;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}