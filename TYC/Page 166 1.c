#include<stdio.h>
int main(){
	int a[5],i,se=0,so=0;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<5;i++){
	if(!(a[i]%2))
	se+=a[i];
	if(a[i]%2)
	so+=a[i];
}
printf("se=%d, so=%d",se,so);
	}
