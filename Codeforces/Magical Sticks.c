#include<stdio.h>
int main(){
	int t,n,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		if(n%2==0)
		{
			a=n/2;
			printf("%d\n",a);
		}
		else 
		{
			b=(n/2)+1;
			printf("%d\n",b);
		}
	}
}
