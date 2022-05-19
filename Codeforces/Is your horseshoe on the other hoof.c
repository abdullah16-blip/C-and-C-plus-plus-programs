#include<stdio.h>
int main(){
	int a[4],c=0,i,j,t;
	for(i=0;i<4;i++)
		scanf("%d",&a[i]);
	for(i=1;i<4;i++)
	for(j=3;j>=i;j--)
		if(a[j-1]>a[j])
		{
			t=a[j-1];
			a[j-1]=a[j];
			a[j]=t;
		}
	for(i=0;i<3;i++){
		if(a[i]==a[i+1])
			c++;
		}
	printf("%d\n",c);
	}
