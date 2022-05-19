#include <bits/stdc++.h>
using namespace std;
class Secant
{
private:
    double epsilone = 0.01;
    double function(double x)
    {
        return x * x * x + x * x - 1;
    }

public:
    double root;
    void solve()
    {
        double now, old, previous;
        srand((int)time(0));
        now = rand() % 10;
        old = now - 1;
        previous = now;
        while (true)
        {
            root = now - (function(now) * (now - old)) / (function(now) - function(old));
            if (abs((root - previous) / root) < epsilone)
            {
                break;
            }
            old = now;
            now = root;
            previous = root;
        }
        cout << "The root is: " << root;
    }
};

int main()
{
    Secant secant;
    secant.solve();
}