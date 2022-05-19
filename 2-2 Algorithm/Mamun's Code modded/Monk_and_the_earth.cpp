#include <bits/stdc++.h>
using namespace std;
vector<int> ver[10010];
int nodes, edge;
int bfs()
{
    queue<int> q;
    int visit[10010] = {0}, weight[10010] = {0};
    q.push(1);
    visit[1] = 1;
    int temp;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        for (int i = 0; i < ver[temp].size(); i++)
        {
            if (visit[ver[temp][i]] == 0)
            {
                q.push(ver[temp][i]);
                visit[ver[temp][i]] = 1;
                weight[ver[temp][i]] = weight[temp] + 1;
            }
        }
    }
    for (int i = 0; i <= nodes; i++)
    {
        ver[i].clear();
    }
    return weight[nodes];
}
void creat()
{
    int x, y;
    for (int i = 0; i < edge; i++)
    {
        cin >> x >> y;
        ver[x].push_back(y);
        ver[y].push_back(x);
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> nodes >> edge;
        creat();
        cout << bfs() << endl;
    }
}