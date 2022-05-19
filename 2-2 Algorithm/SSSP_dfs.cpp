//Single source shortest path on tree using DFS
#include <bits/stdc++.h>
using namespace std;

int n,e,vis[10001],dist[10001]; //global declaration
vector<int>adj[10001];

void dfs(int node, int d)
{
    int child;
    vis[node] = 1;
    dist[node] = d;
    cout<<node<<"->"; 
    
    for(auto child: adj[node])
        if(vis[child]==0)
            dfs(child, dist[node]+1);
}

int main()
{
    cin>>n>>e;

    for(int i=0; i<e; i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    } 

    for(int i=1; i<=n; i++) //initially all elements of visited and dist array is zero
    {
        vis[i]=0;
        dist[i]=0;
    }
    dfs(1,0);
    cout<<"\n";
    for(int i=1; i<=n; i++)
        cout<<dist[i]<<"->";
}