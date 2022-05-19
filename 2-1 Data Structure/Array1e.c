#include<stdio.h>
#include<math.h>
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		printf("%lf\n",sin(a[i]));
	}
}


