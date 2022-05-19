#include<stdio.h>
int main(){
	int n,g,i,j,x,k,s=0;
	scanf("%d %d",&n,&g);
	int a[n][2];
	for(i=0;i<n;i++)
	for(j=0;j<2;j++)
	scanf("%d %d",&a[i][0],&a[i][1]);
	scanf("%d",&x);
	int b[x];
	for(k=0;k<x;k++)
	scanf("%d",&b[k]);
	for(k=0;k<x;k++)
	for(i=0;i<n;i++){
	if(a[i]==b[k])
	s=s+a[i][1];
}
	printf("%d\n",s);
	}
