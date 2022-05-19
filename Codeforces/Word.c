#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
	char s[101];
	int i,u=0,l=0;
	scanf("%s",s);
	for(i=0;i<strlen(s);i++){
		if(isupper(s[i]))
			u++;
		else 
			l++;
	}
	if(u>l){
		for(i=0;i<strlen(s);i++)
			s[i]=toupper(s[i]);
		printf("%s\n",s);
	}
	else {
		for(i=0;i<strlen(s);i++)
			s[i]=tolower(s[i]);
		printf("%s\n",s);
	}
}
		
	
