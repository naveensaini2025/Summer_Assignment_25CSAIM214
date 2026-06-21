#include<stdio.h>
int main()
{
    int i,e=0,o=0;
    int a[]={2,3,5,3,2,45,564,3,2,9};// let it be a sample array
    int m=sizeof(a)/4;
    for(i=0;i<m;i++)
    {
        if(a[i]%2==0)
        e++;
        else
        o++;
    }
    printf("no. of odd terms in array is %d\n",o);
    printf("no. of even terms in array is %d",e);
    return 0;
}
