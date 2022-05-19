#include <bits/stdc++.h>
using namespace std;
class NewtonRaphson
{
private:
    double epsilone = 0.00001;
    double function(double x)
    {
        return x * x * x + x * x - 1;
    }
    double deriveFunction(double x)
    {
        return 3 * x * x - 2 * x;
    }

public:
    double root;
    void solve()
    {
        srand((int)time(0));
        while (true)
        {
            root = rand() % 10;
            cout<<root<<endl;
            if (deriveFunction(root) != 0)
            {
                break;
            }
        }
        double previous = root;
        while (true)
        {
            root = root - (function(root) / deriveFunction(root));
            if (deriveFunction(root) == 0)
                root++;
            if (abs((root - previous) / root) < epsilone)
            {
                break;
            }
            previous = root;
        }
        cout << "The root is: " << root;
    }
};
int main()
{
    NewtonRaphson nr;
    nr.solve();
}
