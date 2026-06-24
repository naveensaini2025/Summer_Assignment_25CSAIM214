#include<stdio.h>
int dup(int f, int *a,int s)
{
    int i,count=0;
    for (i=0;i<s;i++)
    {
        if(a[i]==f)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int m;
    int a[]={5,6,5,72,7,8,9,32,6};//let it be a sample array
    int s = sizeof(a)/4;
    for (int i=0;i<s;i++)
    {
        m=dup(a[i],a,s);
        if(m!=1)
        printf("%d has %d duplicates in array\n",a[i],m);
    }
    return 0;
}