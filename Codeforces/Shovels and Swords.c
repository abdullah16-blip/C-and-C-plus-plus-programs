#include<stdio.h>
int main(){
	int t,a,b,sh=0,sw=0,e=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&a,&b);
		while((a>1 && b>0) || (a>0 && b>1)){
			a-=2;
			b-=1;
			sh++;
			a-=1;
			b-=2;
			sw++;
			e+=2;
		}
		printf("%d\n",e);
	}
}
