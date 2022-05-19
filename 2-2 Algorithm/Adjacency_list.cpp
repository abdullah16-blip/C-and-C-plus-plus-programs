#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,e;
    cin>>n>>e; //input no. of nodes and edges

    vector<int>adj[n+1]; //n+1 because nodes don't start from zero

    for(int i=0; i<e; i++) //input in the vector array
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    } 

    for(int i=1;i<=n;i++) //outputting adjacency list
    {
        cout<<i<<"->";
        for(auto j:adj[i]) //foreach int in adj[i]
            cout<<j<<" ";  //adj[i] is the ith list
        cout<<endl;
    }
}