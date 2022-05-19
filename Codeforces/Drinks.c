#include<stdio.h>
int main(){
	int n,i;
	double ans,s=0.0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		s+=a[i];
	}
	ans=s/n;
	printf("%.12lf\n",ans);
}
