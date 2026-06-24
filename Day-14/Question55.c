#include<stdio.h>
int main()
{
    int a[]={5,6,5,72,7,8,9,32,6};//let it be a sample array
    int i,l,j,sl;
    int s = sizeof(a)/4;
    l=a[0];
    for (i=0;i<s-1;i++)
    {
        if(l<a[i+1])
        {
            l=a[i+1];
            j=i;
        }
    }
    for(i=0;i<s-1;i++)
    {
        if(i==l)
        {
            continue;
        }
        if(a[i]<a[i+1])
        {
            sl=a[i+1];
        }
    }
    printf("second largest element in the array is %d",sl);
    return 0;
}
