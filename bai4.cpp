//4. Fibonacci: Vi?t chuong trình tính n s? d?u tiên trong dãy Fibonacci.
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int s=1;
    int a=0,b=1,c,d;
    for(int i=1;i<n-2;i++)
    {
    	int k=b;
    	b=b+a;
    	a=k;
    	s=s+b;
    	}
    	printf("%d",s);
    	}
    	
