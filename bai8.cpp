//8. Tìm s? l? l?n nh?t: Tìm s? l? l?n nh?t trong m?t m?ng s? nguyên.
#include<stdio.h>
#include<math.h>
int main(){
	int a[100], b[100];
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		}
		int k=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]%2>0)
			{
				b[k]=a[i];
				k=k+1;
				}
				}
				int vt,x;
					for(int i=1;i<k;i++){
		x=b[i]; 
		vt =i;
		while(vt>0&&x<b[vt-1]){
			b[vt]=b[vt-1];
			vt--;
		}
		b[vt]=x;}
		printf("%d", b[k-1]);
		}
			
