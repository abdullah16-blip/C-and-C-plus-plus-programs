#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;   // a 1d vector
    for(int i=0; i<5; i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }
    for(auto i:v)   //for each i in v
        cout<<i<<endl;
}