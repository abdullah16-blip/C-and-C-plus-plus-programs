#include<stdio.h>
int main(){
	int n,i,j,cou=0;
	scanf("%d %d",&i,&j);
	int a[i];
	for(n=0;n<i;n++)
	scanf("%d",&a[n]);
	if(a[0]==0)
	printf("0");
	else{
	for(n=0;n<i;n++)
	if(a[n]>=a[j-1] && a[n]!=0)
	cou++;
	printf("%d",cou);
}
}
