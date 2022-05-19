#include<stdio.h>
int main(){
	long int a,b,n,t,c;
	scanf("%ld",&t);
	while(t--){
		c=0;
		scanf("%ld %ld %ld",&a,&b,&n);
		do{
			if(a>b)
			{
			b+=a;
			c++;
			if(b>n)
			break;
		}
			a+=b;
			c++;
			if(a>n)
			break;
		}while(a<n || b<n);
		printf("%ld\n",c);
		}
	}
