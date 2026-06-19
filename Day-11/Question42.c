#include <stdio.h>

int findMaximum(int a, int b)
{
    return (a > b) ? a : b;
}

int main(void)
{
    int x, y;

    printf("Enter two integers: ");
    scanf("%d%d",&x,&y);
    printf("Maximum = %d\n", findMaximum(x, y));
    return 0;
}
