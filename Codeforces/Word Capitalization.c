#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	char a[1000];
	int i;
	gets(a);
	printf("%c",toupper(a[0]));
	for(i=1;i<strlen(a);i++)
	printf("%c",a[i]);
	}
