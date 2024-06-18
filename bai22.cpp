// 22. Ð?i co s?: Vi?t chuong trình chuy?n d?i m?t s? nguyên t? h? co s? 10 sang h? co s? 2.
#include <stdio.h>

int main() {
    int a;
    int b[32];
    int c = 0;
    scanf("%d", &a);

    if (a == 0) {
        printf("0");
    }
    int n = a;
    while (n > 0) {
        b[c] = n % 2;
        n = n / 2;
        c++;
    }
    for (int i = c - 1; i >= 0; i--) {
        printf("%d", b[i]);
    }
    printf("\n");

  
}

