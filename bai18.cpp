//18. T�nh t?ng ch? s?: T�nh t?ng c�c ch? s? c?a m?t s? nguy�n duong.

#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	gets(a);
	int s=0;
	for(int i=0;i<strlen(a);i++)
	{
		s = s + a[i]-'0';
		}
		printf("%d", s);
		}
