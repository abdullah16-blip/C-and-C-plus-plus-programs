#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int i;
	char a[100],b[100];
	gets(a);
	gets(b);
	for(i=0;i<strlen(a);i++){
	a[i]=tolower(a[i]);
	b[i]=tolower(b[i]);
}
	printf("%d",strcmp(a,b));
	}
