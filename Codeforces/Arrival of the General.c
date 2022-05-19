#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,max,min,lmax,lmin;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	max = a[0];
    for (i = 0; i < n; i++)
        if (max < a[i])
            max = a[i];
    min = a[0];
    for (i = 0; i < n; i++)
        if (min > a[i])
            min = a[i];
            
    for(i=n-1;i>=0;i--)
		if(a[i]==max)
		lmax=i;
	for(i=0;i<n;i++)
		if(a[i]==min)
		lmin=i;
	if(lmax>lmin)
		printf("%d\n",(lmax-1+n-lmin-1));
	else
		printf("%d\n",(lmax-1+n-lmin));
}
	
