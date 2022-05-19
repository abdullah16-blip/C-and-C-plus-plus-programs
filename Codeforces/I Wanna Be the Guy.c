#include<stdio.h>
int main(){
	int n,p,q,i,c=0;
	scanf("%d %d",&n,&p);
	n++;
	int x[p];
	int z[n];
	for(i=0;i<n;i++)
		z[i]=0;
	for(i=0;i<p;i++){
		scanf("%d",&x[i]);
		z[x[i]]=1;
	}
	scanf("%d",&q);
	int y[q];
	for(i=0;i<q;i++){
		scanf("%d",&y[i]);
		z[y[i]]=1;
	}
	for(i=1;i<n;i++){
		if(z[i]==0)
		{
			c=1;
			printf("Oh, my keyboard!");
			break;
		}
	}
	if(c==0)
		printf("I become the guy.");
}
	
