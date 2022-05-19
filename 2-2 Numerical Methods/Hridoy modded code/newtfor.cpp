#include <bits/stdc++.h>
using namespace std;

double y[100][100];

class newtonforward
{
public:
    void forwartable(int n)
    {
        for (int i = 1; i < n; i++)
            for (int j = 0; j < n - i; j++)
                y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
    }

    void printable(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i; j++)
            {
                cout << y[i][j] << " ";
            }
            cout << endl;
        }
    }
    double u, sum = y[0][0];
    void solve(int n, double x[], double value)
    {
        u = ((value - x[0]) / (x[1] - x[0]));
        for (int i = 1; i < n; i++)
        {
            sum += (u_cal(i, u) * y[0][i]) / fact(i);
        }
    }
    double u_cal(int m, double u)
    {
        double temp = u;
        for (int i = 1; i < m; i++)
        {
            temp = temp * (u - i);
        }
        return temp;
    }
    double fact(int i)
    {
        if (i == 0)
            return 1;
        return i * fact(i - 1);
    }
};

int main()
{
    int n;
    cin >> n;
    double x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        cin >> y[i][0];
    }
    double value;
    cin>>value;
    newtonforward newt;
    newt.forwartable(n);
    newt.printable(n);
    newt.solve(n, x, value);
    cout << newt.sum << endl;
}