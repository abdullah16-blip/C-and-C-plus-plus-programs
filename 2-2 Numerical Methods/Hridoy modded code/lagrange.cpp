#include <bits/stdc++.h>
using namespace std;
struct Pair
{
	int x, y;
};
class Lagrange
{
public:
	double lagrange(Pair p[], int xi, int n)
	{
		double result = 0;
		for (int i = 0; i < n; i++)
		{
			double term = p[i].y;
			for (int j = 0; j < n; j++)
			{
				if (j != i)
					term = term * (xi - p[j].x) / double(p[i].x - p[j].x);
			}
			result += term;
		}
		return result;
	}
};
int main()
{
	Lagrange l;
	int n, xn;
	cin >> n;
	Pair p[100];
	for (int i = 0; i < n; i++)
	{
		cin >> p[i].x >> p[i].y;
	}
	cin >> xn;
	cout << "Value of f(3) is : " << l.lagrange(p, xn, n + 1);
	return 0;
}
