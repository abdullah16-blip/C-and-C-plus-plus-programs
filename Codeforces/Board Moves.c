#include<stdio.h>
#include<stdlib.h>
int main(){
	long long t,n,i;
	scanf("%lld",&t);
	while(t--){
		long long s=0;
		scanf("%lld",&n);
		for(i=1;i<=(n/2);i++)
		s+=(i*i*8);
		printf("%lld\n",s);
	}
}
