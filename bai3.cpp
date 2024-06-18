//3. S? hoàn h?o: Ki?m tra xem m?t s? nguyên duong n có ph?i là s? hoàn h?o hay không (t?ng các u?c s? c?a nó b?ng chính nó).
#include<stdio.h>
#include<math.h>
int main()
{
	int n,s=0;
	scanf("%d", &n);
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		s=s+i;
		}
		if(s==n)
		printf("so hoan hao");
		else
		printf("khong la so hoan hao");
		}
