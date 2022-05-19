#include <bits/stdc++.h>
using namespace std;
int graph[10000][10000];
void warshall(int node)
{
    for (int k = 1; k <= node; k++)
    {
        for (int i = 1; i <= node; i++)
        {
            for (int j = 1; j <= node; j++)
            {
                if (graph[i][k] + graph[k][j] < graph[i][j])
                {
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int node;
        cin >> node;

        vector<string> city;
        for (int i = 1; i <= node; i++)
        {
            for (int j = 1; j <= node; j++)
            {
                graph[i][j] = 200020;
            }
        }
        string name_of_city;
        for (int i = 1; i <= node; i++)
        {

            cin >> name_of_city;
            city.push_back(name_of_city);
            // city[i] = name_of_city;
            int no_of_edge, edge, weight;
            cin >> no_of_edge;

            for (int j = 0; j < no_of_edge; j++)
            {
                cin >> edge >> weight;
                graph[i][edge] = weight;
            }
        }

        warshall(node);

        int output, from, to;
        string str1, str2;

        cin >> output;

        for (int i = 0; i < output; i++)
        {
            cin >> str1 >> str2;

            for (int j = 0; j < node; j++)
            {

                if (city[j] == str1)
                {
                    from = j + 1;
                }
            }
            for (int j = 0; j < node; j++)
            {
                if (city[j] == str2)
                {
                    to = j + 1;
                }
            }

            cout << graph[from][to] << endl;
        }
    }
}