#include<stdio.h>
int main(){
	int k,n,w,m=0,i,j;
	scanf("%d %d %d",&k,&n,&w);
	for(i=1;i<=w;i++)
	m=m+(i*k);
	j=m-n;
	if(j<0)
	printf("0\n");
	else
	printf("%d\n",j);
	}
