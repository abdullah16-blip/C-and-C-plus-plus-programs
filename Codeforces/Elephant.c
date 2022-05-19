#include<stdio.h>
int main(){
	int i,j=0;
	scanf("%d",&i);
	for(;;){
		i-=5;
		j++;
		if(i<=0)
		break;
	}
	printf("%d\n",j);
}
