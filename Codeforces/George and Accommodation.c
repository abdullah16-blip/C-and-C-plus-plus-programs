#include<stdio.h>
int main(){
	int n,p,q,c=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&p,&q);
		if((q-p)>=2)
		c++;
		}
		printf("%d\n",c);
	}
