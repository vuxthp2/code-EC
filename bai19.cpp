//19. H�m d? quy Fibonacci: Vi?t h�m d? quy d? t�nh s? Fibonacci th? n.
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n; 
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); 
    }
}

int main() {
    int n;
    scanf("%d", &n);
    if (n >= 0) {
        int kq = fibonacci(n);
        printf("so thu %d l�: %d", n, kq);
    }

}

