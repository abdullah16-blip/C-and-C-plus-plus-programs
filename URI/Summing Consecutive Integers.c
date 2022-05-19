#include<stdio.h>
int main(){
	int a,n,s=0;
	scanf("%d",&a);
	do{
		scanf("%d",&n);
		}while(n<=0);
		while(n--){
			s=s+a;
			a++;
		}
		printf("%d\n",s);
	}
