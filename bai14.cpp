//14. T�m UCLN v� BCNN: Vi?t chuong tr�nh t�m UCLN v� BCNN c?a hai s? nguy�n duong.
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
