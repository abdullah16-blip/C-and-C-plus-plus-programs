#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,c=1,t,len;
    char a[101];
    scanf("%s",a);
    len=strlen(a);    
    for(i=0;i<len-1;i++)
        for(j=i+1;j<len;j++)
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
			}
    for(i=0;i<len-1;i++)
         if(a[i]!=a[i+1])
             c++;
    printf("%s\n",a);
    printf("%d\n",c);
    if(c%2==0)
      printf("CHAT WITH HER!\n");
    else 
      printf("IGNORE HIM!\n");
    return 0;
}
