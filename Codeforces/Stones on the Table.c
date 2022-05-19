#include<stdio.h>
#include<string.h>
int main(){
	int n,i,c=0;
	scanf("%d",&n);
	char a[n+1];
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	if(a[i]==a[i+1])
	c++;
	printf("%d\n",c);
	}
