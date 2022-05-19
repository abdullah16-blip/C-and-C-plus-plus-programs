#include<stdio.h>
int main(){
	unsigned long long n;
	int i,c=0;
	scanf("%I64u",&n);
	while(n){
		i = n%10;
		if(i==7 || i==4)
		c++;
		n/=10;
	}
	if(c==7 || c==4)
		printf("YES");
	else printf("NO");
	}
