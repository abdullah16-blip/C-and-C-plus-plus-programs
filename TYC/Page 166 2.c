#include<stdio.h>
#include<string.h>
int main(){
	char a[]={"Abdul1"};
	char b[10];
	int c;
	for(c=0;c<3;c++){
	gets(b);
	if(!strcmp(b,a))
	break;
}
	if(c==3)
	printf("Access Denied\n");
	else
	printf("Welcome\n");
}
