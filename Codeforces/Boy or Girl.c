#include<stdio.h>
#include<string.h>
int main(){
	int i,j,c=1,t,len;
	char a[101];
	scanf("%s",a);
	len=strlen(a);
	//sort thyself
	for(i=1;i<len;i++)
	for(j=len-1;j>=i;j--)
	if(a[j-1]>a[j])
	{
		t=a[j-1];
		a[j-1]=a[j];
		a[j]=t;
	}
	for(i=0;i<len-1;i++)
		if(a[i]!=a[i+1])
		c++;
	if(c%2==0)
		printf("CHAT WITH HER!\n");
	else 
		printf("IGNORE HIM!\n");
}
