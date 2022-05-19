#include<stdio.h>
int main(){
	int n,h,i,w=0;
	scanf("%d %d",&n,&h);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		if(h<a[i])
		w+=2;
		else w++;
	}
	printf("%d\n",w);
}
