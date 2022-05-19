//only 2 bytes are transferred thus generating garbage
#include<stdio.h>
int main(){
	int *p;
	double q,temp;
	temp = 1234.34;
	p = &temp;
	q=*p;
	printf("%f",q);
}
