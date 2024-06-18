#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int vt,x;
	for(int i=1;i<n;i++){
		x=a[i]; 
		vt =i;
		while(vt>0&&x<a[vt-1]){
			a[vt]=a[vt-1];
			vt--;
		}
		a[vt]=x;
	}
for(int i=n-1;i>=0;i--)
{
	if(a[i-1]<a[i])
	{
		printf("%d", a[i-1]);
		break;
		}

}}
