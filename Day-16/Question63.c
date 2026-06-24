#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,sum,j,n,l,m;
    printf("enter no. of elements: ");
    scanf("%d",&n);
    int *a = malloc(sizeof(int)*n);
    for (i=0;i<n;i++)
    {
        printf("Enter element no. %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter value of sum to match pair: ");
    scanf("%d",&sum);
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(j==i)
            continue;
            if(a[i]+a[j]==sum)
            {
                l=a[i];
                m=a[j];
                count++;
                break;
            }
        }
    }
    if(count)
    printf("the pair match for sum = %d is %d and %d.",sum,l,m);
    else
    printf("no matching pair found for sum= %d",sum);    
    return 0;
}