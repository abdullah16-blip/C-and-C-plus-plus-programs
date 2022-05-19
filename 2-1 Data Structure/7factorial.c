#include<stdio.h>

int fac(int n);

int main()
{
    int x;
    printf("Enter the number you want the factorial for:\n");
    scanf("%d",&x);
    printf("\nThe factorial is: %d",fac(x));
}

int fac(int n)
{
    if(n==0)
        return 1;
    else
    {
        return fac(n-1)*n;
    }
}
