#include<bits/stdc++.h>
using namespace std;
int n;        
double a,b;
double f(double x)        
    {
        double a=1/(1+x*x);
        return a;
    }
class Simson
{
public:
    double sum=0,integral;
    double h,k;
    void simson()
    {
        h=(b-a)/n;
        double sum=f(a)+f(b);                
        for(int i=1; i<= n-1; i++)
        {
            k = a + i*h;

            if(i%2==0)
            {
                sum = sum + 2 * (f(k));
            }
            else
            {
                sum = sum + 4 * (f(k));
            }
        
        }
        integral = sum*(h/3);
        cout<<"The integral is "<<integral;   
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
    Simson s;
    s.simson();       
   
}
