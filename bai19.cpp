//19. Hàm d? quy Fibonacci: Vi?t hàm d? quy d? tính s? Fibonacci th? n.
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
        printf("so thu %d là: %d", n, kq);
    }

}

