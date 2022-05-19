#include<bits/stdc++.h>
using namespace std;
int n;        
double a,b;
double f(double x)        
    {
        double a=1/(1+x*x);
        return a;
    }
class Trapizoidal
{
public:
    double sum=0,integral;
    double h;
    void trapizoidal()
    {
        h=(b-a)/n;
        double sum=f(a)+f(b);                
        for (int i=1;i<n;i++)            
        {                    
            sum+=2*f(a+i*h);
        }
        integral=(h/2.0)*sum;       
        cout<<"The definite integral  is "<<integral<<endl;
    }
    
};

int main()
{
       
    cout<<"Enter the lower limit"; 
    cin>>a;
    cout<<"Enter the upper limit";
    cin>>b;
    cout<<"Enter the no. of subintervals";            
    cin>>n;
    Trapizoidal tr;
    tr.trapizoidal();       
   
}