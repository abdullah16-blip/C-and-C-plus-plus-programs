#include<stdio.h>

int fibe(int n);    //efficient fibonacci finder with order O(n) 
int fib(int n);     //inefficient but easy method with order O(2^n)

int f[10],i,x;

int main()
{
    for(i=0;i<10;i++)
        f[i]==-1;
    printf("Calculate Fibonacci(Fn) term for the number: ");
    scanf("%d",&x);
    printf("\nFn term for the number %d is: %d\n",x,fibe(x));

    return 0;
}

int fib(int n)
{
    if(n<=1)
        return n;
    else
        return fib(n-2)+fib(n-1);
}

int fibe(int n)
{
    if(n<=1)
    {
        f[n]=n;
        return n;
    }
    else
    {
        if(f[n-2]==-1)
            f[n-2]=fibe(n-2);
        if(f[n-1]==-1)
            f[n-1]=fibe(n-1);
            f[n]=fibe(n-2)+fibe(n-1);
        return f[n-2]+f[n-1];
    }
    
}