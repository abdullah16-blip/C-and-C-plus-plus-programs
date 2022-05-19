#include<stdio.h>
int main()
{
	int a[]={20,30,40,60,70,},i,j,k;
	
	for(i=0;i<5;i++)
	{
		if(a[i]>54)
		{
			k=i;
			break;
		}
	}
	
	j=sizeof(a)/4;
			while(j>k)
			{
				a[j]=a[j-1];
				j--;
			}
	a[k]=54;
	
	for(i=0;i<6;i++)
		printf("%d\n", a[i]);
}
