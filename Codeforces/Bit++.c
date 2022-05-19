#include<stdio.h>
#include<string.h>
int main(){
	int i,x=0;
	char a[4];
	scanf("%d",&i);
	while(i--){
		scanf("%s",a);
		if(a[1]=='+')
		x++;
		else 
		x--;
	}
	printf("%d",x);
}
