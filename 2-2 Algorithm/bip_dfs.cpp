//Checks whether a graph is bipartite or not/ Or if two adjacent nodes in the graph can be given two different colors/two coloring problem
#include <bits/stdc++.h>
using namespace std;

int n,e,vis[10001],col[10001]; //global declaration
bool res;
vector<int>adj[10001];

bool dfs(int node, int color)
{
    int child;
    vis[node] = 1;
    col[node] = color;
    cout<<node<<"->"; 
    
    for(auto child: adj[node])
    {
        if(vis[child]==0)
        {
            if(dfs(child, color^1) == false)
            return false;
        }
        else if(col[node]== col[child])
            return false; 
    }     
    return true;
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
    res = dfs(1,1); //will return 0(false/not bipartite) or 1(true/bipartite)
    cout<<"\n"<<res;
}