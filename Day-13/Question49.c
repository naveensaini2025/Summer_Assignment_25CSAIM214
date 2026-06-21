#include<stdio.h>
int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
        printf("enter element no. %d: ",i+1);
        scanf("%d",&a[i]);
        printf("\n");
    }
    printf("The array is :\n");
    for (i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}