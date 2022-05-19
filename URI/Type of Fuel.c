#include<stdio.h>
int main(){
	int i,a=0,g=0,d=0;
	do{
		scanf("%d",&i);
		if(i==1)
		a++;
		if(i==2)
		g++;
		if(i==3)
		d++;
		}while(i!=4);
		printf("MUITO OBRIGADO\n");
		printf("Alcool: %d\n",a);
		printf("Gasolina: %d\n",g);
		printf("Diesel: %d\n",d);
	}
