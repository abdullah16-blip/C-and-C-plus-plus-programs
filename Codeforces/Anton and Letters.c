#include<stdio.h>
#include<string.h>
int main(){
	int i,j,c=0,t,len;
	char b[1001];
	scanf("%s",b);
	len=strlen(b);
	//sort thyself
	for(i=1;i<len;i++)
	for(j=len-1;j>=i;j--)
		if(b[j-1]>b[j])
		{
			t=b[j-1];
			b[j-1]=b[j];
			b[j]=t;
		}
	for(i=1;i<len-1;i++)
	{
        if(b[i]>='a' && b[i]<='z')
        {
            c++;
            if(b[i]==b[i+1])
                c--;
        }
    }
    printf("%d\n",c);
    puts(b);
}
