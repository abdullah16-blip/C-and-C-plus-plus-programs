//for factorial
#include<iostream>
using namespace std;
int factorial(int x)
{
    if(x==0)
    {
       
        return 1;
    }
   
        return x*factorial(x-1);
    
   

}
int main()
{
    int n;
    cin>>n;
   cout<< factorial(n);
}