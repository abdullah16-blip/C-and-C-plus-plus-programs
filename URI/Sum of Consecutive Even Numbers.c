#include<stdio.h>
int main(){
	int x,s,i,c;
	do{
		scanf("%d",&x);
		if(x==0)
		break;
		s=0;c=0;
		for(i=x;;i++){
			if(i%2==0){
				s=s+i;
				c++;
				}
				if(c==5) break;
				}
				printf("%d\n",s);
				}while(x!=0);
			}
