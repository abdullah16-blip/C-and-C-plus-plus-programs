#include<bits/stdc++.h>
using namespace std;
class Bisection
{
private:
   double epsilone = 0.0001;
   double function(double x){
       return  x * x *x + x*x -1;
   }
public:
   double root, upper, lower;
  void solve(){
       srand((int)time(0));
       while (true)
       {
           lower = rand() % 10;
           upper = rand() % 10;
           if(function(lower)*function(upper) < 0)
           {
               break;
           }
       }
       if(lower > upper){
           swap(lower,upper);
       }
        double previous = lower;
       while (true)
       {
           root = (upper + lower) / 2;
           if(abs(root - previous) / root < epsilone){
               break;
           }
           if(function(lower) * function(root) < 0)
                upper = root;
            else lower = root;
           previous = root;
       }
       cout<<" The root is : "<<root;
       
       
   }
   

};
int main()
{
    Bisection bisection;
    bisection.solve();
}


