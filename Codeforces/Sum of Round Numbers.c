#include<stdio.h>
int main(){
	int n,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
	   int nn=n;
    int c1=0;
    while(nn) {
        if(nn%10>0)
            c1++;
        nn/=10;
    }
    printf("%d\n",c1);
    int cnt=0;
    while(n) {
        if(n%10>0) {
            printf("%d",n%10);
            for(int j=0; j<cnt; j++)
                printf("0");
                printf(" ");
        }
        n/=10;
        cnt++;
    }
    printf("\n");
}
}
	
