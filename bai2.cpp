//2. S? nguyên t?: Ki?m tra xem m?t s? nguyên duong n có ph?i là s? nguyên t? hay không.
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int ok=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			ok=1;
			printf("khong la so nguyen to");
			break;
			}
			}
			if(ok==0)
			printf("la so nguyen to");
			}
