#include<stdio.h>
int main()
{
    int i,s,l;
    int a[]={3,6,7,8,3,1,4,6,0};//let it be the sample array
    int m=sizeof(a)/4;
    s=a[0];
    l=a[0];
    for(i=1;i<m;i++)
    {
        if(s>a[i])
        {
            s=a[i];
        }
        if(l<a[i])
        {
            l=a[i];
        }
    }
    printf("largest element in array is %d \n",l);
    printf("smallest element in array is %d\n",s);
    return 0;
}