//3. S? ho�n h?o: Ki?m tra xem m?t s? nguy�n duong n c� ph?i l� s? ho�n h?o hay kh�ng (t?ng c�c u?c s? c?a n� b?ng ch�nh n�).
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
