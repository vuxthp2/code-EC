//20. H�m d? quy giai th?a: Vi?t h�m d? quy d? t�nh giai th?a c?a m?t s? nguy�n duong.
#include <stdio.h>

long long dq(int n) {
   if (n == 0 || n == 1) {
        return 1;
    }
   
    else 
        return n * dq(n - 1);}

int main() {
    int n;
scanf("%d", &n);
       long long kq = dq(n);
        printf("giai thua cua %d l�: %lld ", n, kq);
    }


