//18. Tính t?ng ch? s?: Tính t?ng các ch? s? c?a m?t s? nguyên duong.

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
