#include<stdio.h>
#include<string.h>
int main(){
 
 char a[101],c[101];
 int i,j;
 
 scanf("%s",a);
 scanf("%s",c);
 
 for(i=0,j=strlen(a)-1;i<strlen(a) && j>=0;i++,j--)
 {
  if(c[i]!=a[j])
    {
        printf("NO\n");
        return 0;
    }
 
}
    printf("YES\n");

    return 0;
}
