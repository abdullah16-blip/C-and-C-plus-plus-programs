//topological sorting using kahn's algo
#include<bits/stdc++.h>
using namespace std;

vector<int>ar[100];
vector<int>res;
int in[100];

void kahn(int n)
{
    queue<int>q;
    for(int i=1;i<=n;i++)
    if(in[i]==0)
    q.push(i);

    while (!q.empty())
    {
        int curr = q.front();
        res.push_back(curr);
        q.pop();
        for(int node:ar[curr])
        {
            in[node]--;
            if(in[node]==0)
            q.push(node);
        }
    }
    cout<<"Topological Sort : ";
    for(int node:res)
    cout<<node<<" ";
}

int main()
{
    int n,m,x,y;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        ar[x].push_back(y);
        in[y]++;
    }
    kahn(n);    //calling kahn
}
