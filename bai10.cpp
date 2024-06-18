//10. Ma tr?n chuy?n v?: Vi?t chuong trình tính ma tr?n chuy?n v? c?a m?t ma tr?n cho tru?c.
#include<stdio.h>
int main(){
int a,b;
int n[100][100];
scanf("%d%d", &a,&b);
for(int i=0;i<a;i++)
{
	for(int j=0;j<b;j++)
	{
		scanf("%d", &n[i][j]);
		}
		}
		for(int i=0;i<b;i++)
		{
			for(int j=0;j<a;j++)
			{
				printf("%d ", n[j][i]);
				}
				printf("\n");
				}
				}
		

