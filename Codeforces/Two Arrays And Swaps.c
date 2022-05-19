#include<stdio.h>
int main(){
	int t,n,k,i,j,te,tem,cou,sum;
	scanf("%d",&t);
	while(t--){
		cou=0,sum=0;
		scanf("%d %d",&n,&k);
		int a[n],b[n];
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		scanf("%d",&b[i]);
		for(i=1;i<n;i++)
		for(j=n-1;j>=i;j--)
		if(b[j-1]<b[j]){
			te=b[j];
			b[j]=b[j-1];
			b[j-1]=te;
		}
		for(i=1;i<n;i++)
		for(j=n-1;j>=i;j--)
		if(a[j-1]>a[j]){
			tem=a[j-1];
			a[j-1]=a[j];
			a[j]=tem;
		}
		for(i=0;i<n;i++){
		if(cou==k)
		break;
		if(b[i]>a[i]){
		a[i]=b[i];
		cou++;
	}
	}
	for(i=0;i<n;i++)
	sum=sum+a[i];
	printf("%d\n",sum);
}
}
