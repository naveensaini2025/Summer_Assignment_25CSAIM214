#include<stdio.h>
int main()
{
    int a[]={5,6,5,7,8,9,32,6};//let it be a sample array
    int i,f,count=0;
    printf("enter the element : ");
    scanf("%d",&f);
    for (i=0;i<(sizeof(a)/4);i++)
    {
        if(a[i]==f)
        {
            count++;
        }
    }
    printf("frequency of %d is %d in array",f,count);
    return 0;
}