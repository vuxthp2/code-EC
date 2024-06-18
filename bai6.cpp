//6. S?p x?p m?ng: Vi?t chuong trình s?p x?p m?t m?ng s? nguyên theo th? t? tang d?n.
#include<stdio.h>
#include<math.h>
int main()
{
	int a[1000],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		}
	int vt ,x;
	for(int i=1;i<n;i++){
		x=a[i]; 
		vt =i;
		while(vt>0 && x<a[vt-1]){
			a[vt]=a[vt-1];
			vt --;
		}
		a[vt]=x;
	}
	for(int i=0;i<n;i++) printf("%d ",a[i]);
	}
