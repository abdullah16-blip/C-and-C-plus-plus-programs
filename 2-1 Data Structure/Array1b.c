#include<stdio.h>
int main()
{
	int a[5],i,min=0;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
		
	for(i=1;i<5;i++)
		if(a[i]<a[min])
		{
			min=i;
		}
			
	printf("%d\n",a[min]);
}
