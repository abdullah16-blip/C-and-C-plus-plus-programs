#include<bits/stdc++.h>
using namespace std;

vector<int>a[10];

int main()
{
    for(int i=0;i<10;i++)
        for(int j=0;i<2;i++)
        {
            int n;
            cin>>n;
            a[i].push_back(n);
        }

    for(auto i:a[10])
    {
        cout<<i<<" ";
    }
}