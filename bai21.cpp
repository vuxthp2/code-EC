//21. In h�nh ch? nh?t r?ng: Vi?t chuong tr�nh in ra h�nh ch? nh?t r?ng v?i chi?u d�i v� chi?u r?ng cho tru?c.
#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=b;i++){
		for(int j=1;j<=a;j++){
			if(i==1||i==b||j==1||j==a) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}
