#include <bits/stdc++.h>
using namespace std;

class Falsepos
{
public:
    double root, prevroot;
    double epsilon = 0.0001;
    double upper, lower;
    double func(double x)
    {
        return x * x * x + x * x - 1;
    }

    void falsepos()
    {
        srand((int)time(0));
        while (true)
        {
            
            upper = rand() % 10;
            lower = -upper;
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
            root = ((lower*func(upper))-(upper*func(lower)))/(func(upper)-func(lower));
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
    Falsepos falseposition;
    falseposition.falsepos();
}