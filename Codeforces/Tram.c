#include<stdio.h>
int main(){
	int n,a,b,c=0,t=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&a,&b);
		c+=b;
		c-=a;
		if(c>t)
		t=c;
		}
		printf("%d\n",t);
	}
