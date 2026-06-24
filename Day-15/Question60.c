#include<stdio.h>
int main()
{
    int a[]={5,6,7,2,3,4,56,0,0,6};
    int i ,j,m;
    int size=sizeof(a)/4;
    for (i=0;i<size;i++)
    {
        if(a[i]==0)
        {
            for(int j= i ; j < size - 1; j++) 
            {
                a[j] = a[j + 1]; 
            }
            a[size - 1] = 0;
            i--;
            size--;
        }
    }
    printf("array after formatting is: ");
    size=sizeof(a)/4;
    for (i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}