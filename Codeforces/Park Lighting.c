#include<stdio.h>
#include<math.h>
int main(){
	int t;
	float n,m,v,r;
	scanf("%d",&t);
	while(t--){
		scanf("%f %f",&n,&m);
		v=(n*m)/2;
		r=ceil(v);
		printf("%.0f\n",r);
		}
	}
