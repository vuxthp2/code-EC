//12. S? Armstrong: Ki?m tra xem m?t s? nguyên duong n có ph?i là s? Armstrong hay không.
#include<stdio.h>
#include<math.h>
int main()
{
	int n, s=0, cuoi;
	scanf("%d", &n);
	int h=n;
	while(h>0)
	{
		cuoi = h%10;
		s= s+ pow(cuoi,3);
		h =h/10;
		}
		if(s==n)
		printf("yes");
		else
		printf("no");
		}
