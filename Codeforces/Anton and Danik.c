#include<stdio.h>
#include<string.h>
int main()
{
	int n,a=0,d=0,i;
	scanf("%d",&n);
 
	char s[n];
	scanf("%s",s);
 
	for(i=0;i<n;i++)
    {   
		if(s[i]=='A')
			a++;
		else
			d++;
	}

	if(a>d)
		printf("Anton\n");
	else if(d>a)
		printf("Danik\n");
	else 
		printf("Friendship\n");
	}
