//14. Tìm UCLN và BCNN: Vi?t chuong trình tìm UCLN và BCNN c?a hai s? nguyên duong.
#include <stdio.h>
int main(){
	long long a,b;
	scanf("%lld %lld", &a,&b);
	long long m=a*b;
	while(a!=b){
		if(a>b) 
		a-=b;
		if(b>a) 
		b-=a;
	}
	printf("%lld %lld",a,m/a);
}
