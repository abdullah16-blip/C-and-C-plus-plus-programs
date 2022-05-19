#include<stdio.h>
#include<string.h>
int main(){
	char a[101],b[101],c[101];
	int i;
	gets(a);
	gets(b);
	for(i=0;i<strlen(a);i++){
		if(a[i]!=b[i])
			c[i]='1';
		else
			c[i]='0';
	}
	for(i=0;i<strlen(a);i++)
		printf("%c",c[i]);
}
