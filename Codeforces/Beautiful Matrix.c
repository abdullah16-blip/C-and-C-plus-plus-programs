#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[5][5],i,j,cou,r,c;
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	if(a[i][j]==1){
	r=i+1;
	c=j+1;
	cou=abs(3-r)+abs(3-c);
	}
	printf("%d",cou);
}
