#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char a[80];
	
	gets(a);
	if(strcmp(a,"Rahim"))
		strcat(a,"Rahim");
	else
		strcat("Rahim",a);
	puts(a);
}
	
