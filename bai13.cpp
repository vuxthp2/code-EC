//13. Ch? s? l?n nh?t: Tìm ch? s? l?n nh?t trong m?t s? nguyên duong.
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	gets(a);
	int s =a[0];
	for(int i=1; i<strlen(a); i++)
	{
		if(a[i]>=s)
		s=a[i];
		}
		printf("%c", s);}
		
	
