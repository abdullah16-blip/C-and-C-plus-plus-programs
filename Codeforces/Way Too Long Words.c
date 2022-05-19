#include<stdio.h>
#include<string.h>
int main(){
	int n,i,count;
	char a[100];
	scanf("%d",&n);
	n++;
	while(n--){
	gets(a);
	count=0;
	if(strlen(a)>10){
	for(i=1;i<strlen(a)-1;i++)
	count++;
	printf("%c%d%c\n",a[0],count,a[strlen(a)-1]);
	}
	else printf("%s\n",a);
}
}
