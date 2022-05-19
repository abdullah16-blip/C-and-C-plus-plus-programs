#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,r1,r2;
	scanf("%f %f %f",&a,&b,&c);
	r1=(-b+(sqrt((b*b)-(4*a*c))))/2*a;
	r2=(-b-(sqrt((b*b)-(4*a*c))))/2*a;
	if(r1>=0 || r2>=0 || r1<=0 || r2<=0){
	printf("R1 = %.5f\n",r1);
	printf("R2 = %.5f\n",r2);
}
	else printf("Impossivel calcular\n");
	}
