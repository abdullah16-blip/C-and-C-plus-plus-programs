#include<stdio.h>
int main(){
	int t,a,b,te;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&a,&b);
		if(a<b){
			te=b;
			b=a;
			a=te;
		}
		if(a>2*b)
		printf("%d\n",a*a);
		else 
		printf("%d\n",(2*b)*(2*b));
	}
}
