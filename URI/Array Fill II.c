#include<stdio.h>
int main(){
	int n[1000],i,j,k=0;
	scanf("%d",&i);
	for(j=0;j<1000;j++){
	n[j]=k;
	k++;
	if(k==i)
	k=0;
}
	for(j=0;j<1000;j++)
	printf("N[%d] = %d\n",j,n[j]);
}
