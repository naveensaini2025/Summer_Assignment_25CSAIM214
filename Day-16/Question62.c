#include <stdio.h>
#include <stdlib.h>
int freq(int*a,int n)
{
    int i,count=0;
    for(i=0;i<sizeof(a);i++)
    {
        if(a[i]==n)
        count++;
    }
    return count;
}

int main()
{
    int n,i,c,f=0,mfe;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int *a = malloc(sizeof(int)*n);
    for (i=0;i<n;i++)
    {
        printf("Enter element no %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        c=freq(a,a[i]);
        if(c>f)
        {
            mfe=a[i];
            f=c;
        }
    }
    printf("%d id the element with maximum frequency with frequency %d",mfe,f);
    return 0;
}