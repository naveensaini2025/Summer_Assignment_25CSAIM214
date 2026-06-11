#include <stdio.h>
int prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1; 
}

int main() {
    int l,h,n;
    printf("Enter a range (start and end): ");
    scanf("%d %d", &l, &h);
    
    for (n = l; n <= h; n++) {
        if (prime(n)) {
            printf("%d \t", n);
        }
    }
    
    return 0;
}   
     