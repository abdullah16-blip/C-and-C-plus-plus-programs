#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int i,j,t;
	gets(a);
	for(i=1;i<strlen(a);i++)
	for(j=strlen(a)-1;j>=i;j--){
	if(a[j-2]>a[j]){
		t=a[j-2];
		a[j-2]=a[j];
		a[j]=t;
	}
}
for(i=0;i<strlen(a);i++)
printf("%c",a[i]);
	}
