#include <bits/stdc++.h>
using namespace std;

int n,e,vis[10001]; //global declaration
vector<int>adj[10001];

void dfs(int node)
{
    int child;
    vis[node]=1;
    cout<<node<<"->"; 
    
    for(auto child: adj[node])
        if(vis[child]==0)
            dfs(child);
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

    for(int i=1; i<=n; i++) //initially all elements of visited array is zero
    {
        vis[i]=0;
    }

    int count=0;    //counting connected components in undirected graph
    for(int i=1; i<=n; i++)
        if(vis[i]==0)
        {
            dfs(i);
            count++;
            cout<<"\n";
        }
    cout<<endl<<"Number of connected components: "<<count;

    //dfs(2); //making a dfs call to any node will result in a recursive call to all other nodes

    // for(int i=1;i<=n;i++) //printing adjacency list
    // {
    //     cout<<i<<"->";
    //     for(auto j:adj[i])
    //         cout<<j<<" ";
    //     cout<<endl;
    // }
}