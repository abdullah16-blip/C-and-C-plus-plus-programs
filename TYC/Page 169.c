/*Just changed the book's example program
Gave the variable a bigger data type than the pointer's
The program runs just fine although they have incompatible data types but there are some problems we will still face
always use compatible data types!!!*/
#include<stdio.h>
int main(){
	double q;
	int *ip;
	ip=&q;
	*ip=100;
	printf("%d",*ip);
	}
