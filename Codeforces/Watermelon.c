#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&i);
	n=i-2;
	if(n%2==0 && n-2>=0)
	printf("YES");
	else printf("NO");
}
