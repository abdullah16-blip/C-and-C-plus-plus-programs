#include <bits/stdc++.h>
using namespace std;

class Secant
{
public:
    double root, prevroot;
    double epsilon = 0.01;
    double func(double x)
    {
        return x * x * x + x * x - 1;
    }
    void sec()
    {
        double newroot;
        srand((int)time(0));
        root = rand() % 10;
        prevroot = root++;
        while (true)
        {
            newroot = root - ((func(root) * (root - prevroot)) / (func(root) - func(prevroot)));
            if (abs(newroot - root) / newroot < epsilon)
            {
                break;
            }
            prevroot = root;
            root = newroot;
        }
        cout << "Root = " << newroot;
    }
};

int main()
{
    Secant secant;
    secant.sec();
}