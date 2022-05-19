#include<stdio.h>
int main(){
	int t,a,b,x,y,te;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d %d",&a,&b,&x,&y);
		if(b>a){
		te=b;
		b=a;
		a=te;
		}
		if(x<y){
			te=y;
			y=x;
			x=te;
		}
		printf("YES\n");
		else printf("NO\n");
		}
	}
