#include <bits/stdc++.h>
using namespace std;
class Bisection
{
public:
    double root, prevroot;
    double epsilon = 0.0001;
    double upper, lower;
    double func(double x)
    {
        return x * x * x + x * x - 1;
    }

    void bisection()
    {
        srand((int)time(0));
        while (true)
        {

            lower = -100 + rand() % 100;
            upper = rand() % 100;
            if (func(lower) * func(upper) <= 0)
            {
                break;
            }
        }
        if (lower > upper)
        {
            swap(lower, upper);
        }
        while (true)
        {
            root = (upper + lower) / 2;

            if (func(root) == 0.00)
            {
                break;
            }

            else if (func(lower) * func(root) <= 0)
            {
                upper = root;
            }
            else
            {
                lower = root;
            }
            if (abs((root - prevroot) / root) < epsilon)
            {
                break;
            }
            prevroot = root;
        }
        cout << "Root = " << root;
    }
};

int main()
{
    Bisection bisection;
    bisection.bisection();
}