#include<stdio.h>
#include<math.h>
int main(){
	int n,k,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&k);
		int need = (k - 1) / (n - 1);
		printf("%d\n",k+need);
}
	}
