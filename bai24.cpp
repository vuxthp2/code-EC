//24. �?m s? nguy�n t? trong m?ng: Vi?t chuong tr�nh d?m s? lu?ng s? nguy�n t? trong m?t m?ng s? nguy�n.
#include <stdio.h>

int main() {
    int a[100];
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

   
    for (int i = 0; i < n; i++) {
        int h = a[i];
        int ok = 1; 

        if (h <= 1) {
            ok = 0;
        } else {
            for (int j = 2; j * j <= h; j++) 
			{
                if (h % j == 0) {
                    ok = 0;
                    break;
        }
            }
        }

        if (ok) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}

