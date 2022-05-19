#include <bits/stdc++.h>
using namespace std;
#define sz 20
int n;
double x[sz];
double y[sz][sz];
double valueOfX;
class Newtons_forward
{
public:
    double uterm(double u, int n)
    {
	double ufinal = u;
	for (int i = 1; i < n; i++)
		ufinal = ufinal * (u - i);
	return ufinal;
    }
    int fact(int n)
    {
        int factorial = 1;
	    for (int i = 2; i <= n; i++)
	        factorial *= i;
	return factorial;
    }
    void newton_forward()
    {
        for (int i = 1; i < n; i++)
        {
		    for (int j = 0; j < n - i; j++)
            {
                y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
            }
			
	    }
	    double sum = y[0][0];
	    double u = (valueOfX - x[0]) / (x[1] - x[0]);
	    for (int i = 1; i < n; i++) 
        {
		    sum = sum + (uterm(u, i) * y[0][i]) /fact(i);
								
	    }
        cout<<"The solution is "<<sum;
	
    }

};

int main()
{
    cout<<"Enter the size of x and y that are given"<<endl;
	cin>>n;
    cout<<"Enter the x and correspond y"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        cin>>y[i][0];
    }
    cin>>valueOfX;
    Newtons_forward nf;
    nf.newton_forward();
	
}
