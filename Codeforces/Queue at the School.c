#include<stdio.h>
#include<string.h>
int main(){
	int n,i,t;
	scanf("%d %d",&n,&t);
	char a[n+1];
	scanf("%s",a);
	while(t--){
		for(i=0;i<n;i++)
			if(a[i]=='B' && a[i+1]=='G'){
				a[i]='G';
				a[i+1]='B';
				i++;
			}
	}
	printf("%s",a);
	}
