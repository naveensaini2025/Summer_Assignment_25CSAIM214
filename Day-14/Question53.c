#include<stdio.h>
int main()
{
    int a[]={5,6,5,7,8,9,32,6};//let it be a sample array
    int i,f;
    printf("enter the element you want to find: ");
    scanf("%d",&f);
    for (i=0;i<(sizeof(a)/4);i++)
    {
        if(a[i]==f)
        {
            printf("element'%d'fount at index %d\n",f,i);
        }
    }
    return 0;
}