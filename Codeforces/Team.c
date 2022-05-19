#include<stdio.h>
int main(){
	int n,i,j,k,sum,cou=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d %d",&i,&j,&k);
		sum=0;
		sum=i+j+k;
		if(sum>=2)
		cou++;
		}
		printf("%d",cou);
	}
