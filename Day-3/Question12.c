#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n1, n2;
    
    printf("Enter first number: ");
    scanf("%d", &n1);
    
    printf("Enter second number: ");
    scanf("%d", &n2);
    
    printf("LCM of %d and %d is: %d\n", n1, n2, lcm(n1, n2));
    
    return 0;
}
