//9. G?p m?ng: Vi?t chuong trình g?p hai m?ng dã s?p x?p thành m?t m?ng dã s?p x?p.
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    int a[m], b[n];
    for (int i = 0; i < m; i++) 
	{
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
	 {
        scanf("%d", &b[i]);
    }

    int gop[1000];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            gop[k++] = a[i++];
        } else {
            gop[k++] = b[j++];
        }
    }

    while (i < m) {
        gop[k++] = a[i++];
    }

    while (j < n) {
        gop[k++] = b[j++];
    }
    for (int i = 0; i < m + n; i++) {
        printf("%d ", gop[i]);
    }
    printf("\n");

    return 0;
}

