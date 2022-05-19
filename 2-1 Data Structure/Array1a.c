#include<stdio.h>
int main()
{
	int a[5],i,max=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		{
			max=a[i];
		}
	}
		printf("%d\n",max);
}
