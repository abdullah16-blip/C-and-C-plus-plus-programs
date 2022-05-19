#include<stdio.h>
#include<math.h>
int main(){
	long long n;
	scanf("%lld",&n);
	if(n%2){
		n*=-1;
		n/=2;
		n--;
		printf("%lld\n",n);
	}
	else{
		n/=2;
		printf("%lld\n",n);
	}
}
