//SSSP using BFS for constant weighted graph
#include <bits/stdc++.h>
using namespace std;

vector<int>adj[10001];
int vis[10001],dist[10001];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src]=1;
    dist[src]=0;

    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        for(int child:adj[curr])
            if(vis[child]==0)
            {
                q.push(child);
                dist[child]=dist[curr] + 1;
                vis[child]=1;
            }
    }
}
int main()
{
    int t,n,e,a,b;
    cin>>t;

    while (t--)
    {
        cin>>n>>e;
        for(int i=1; i<=n; i++)
        {
            adj[i].clear();
            vis[i]=0;
        }

        while(e--)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        bfs(1);
        cout<<dist[n]<<endl;
    }
}