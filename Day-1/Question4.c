#include <stdio.h>
int main()
{
    int n,dig=0;

    printf("Enter the number to count digits: ");

    scanf("%d", &n);
    
    while(n>0)
    {
        n=n/10;
        dig++;
    }
    printf("Number of digits: %d", dig);
    return 0;
}