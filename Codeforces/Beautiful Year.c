#include<stdio.h>
int main(){
	int y,i,j,k,l,temporaryYear;
	scanf("%d",&y);
	while(y){
		y++;
		temporaryYear=y;
		i=temporaryYear%10;
		temporaryYear/=10;
		j=temporaryYear%10;
		temporaryYear/=10;
		k=temporaryYear%10;
		temporaryYear/=10;
		l=temporaryYear;
		if(i!=j && i!=k && i!=l && l!=i && j!=k && j!=l && k!=l)
		{
			printf("%d%d%d%d\n",l,k,j,i);
			break;
		}	
	}
}
