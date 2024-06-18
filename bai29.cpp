//29. Ð?i ch?: Vi?t chuong trình d?i ch? hai s? nguyên mà không s? d?ng bi?n t?m.
#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d", &a, &b);

    a = a + b;  
    b = a - b;  
    a = a - b;

    printf("a = %d, b = %d", a, b);

    return 0;
}

