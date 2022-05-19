#include <bits/stdc++.h>
using namespace std;
class FalsePosition
{
private:
    double epsilone = 0.00001;
    double function(double x)
    {
        return x * x * x + x * x - 1;
    }

public:
    double root, upper, lower;
    void solve()
    {
        srand((int)time(0));
        while (true)
        {
            upper = -100 + rand() % 100;
            lower = rand() % 100;
            if (function(upper) * function(lower) <= 0)
            {
                break;
            }
            if (lower > upper)
            {
                swap(upper, lower);
            }
        }
        double previous = upper;
        while (true)
        {
            root = upper - (function(upper) * (upper - lower) / (function(upper) - function(lower)));
            if (abs(root - previous) / root < epsilone)
            {
                break;
            }
            if (function(lower) * function(root) <= 0)
            {
                upper = root;
            }
            else
                lower = root;
            previous = root;
        }
        cout << "The root is: " << root;
    }
};
int main()
{
    FalsePosition falsy;
    falsy.solve();
}