#include<bits/stdc++.h>
using namespace std;
int adj[100][100];
int two_length[100][100];
int three_length[100][100];
int b[100][100];
int path[100][100];
void Create_adj_matrix(int sz)
{
    for(int i=1;i<=sz;i++)
    {
        for(int j=1;j<=sz;j++)
        {
            adj[i][j]=0;
        }
    }
    int m,x,y;
    cout<<"enter the number of edges :"<<endl;
    cin>>m;
    cout<<"enter the edges : "<<endl;
    while(m--)
    {
        cin>>x>>y;
        adj[x][y]+=1;
    }


}
void show_adj_matrics(int sz)
{
    cout<<"The adjacent matrics is :"<<endl;
    for(int i=1;i<=sz;i++)
    {
        for(int j=1;j<=sz;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
void show_adj(int sz)
{
    cout<<"The adjacent pair are given below :"<<endl;
    for(int i=1;i<=sz;i++)
    {
        for(int j=1;j<=sz;j++)
        {
            if(adj[i][j]!=0)
            {
                cout<<i<<" --> "<<j<<endl;
            }
        }

    }
}

void Create_two_length_matrics(int sz)
{
    for(int i=1;i<=sz;i++)
    {
        for(int j=1;j<=sz;j++)
        {
            two_length[i][j]=0;
        }

    }
    for(int i=1;i<=sz;i++)
    {
        for(int j=1;j<=sz;j++)
        {
           for(int k=1;k<=sz;k++)
           {
               two_length[i][j]+=adj[i][k]*adj[k][j];
           }

        }

    }
}
void show_two_length_matrics(int sz)
{
    cout<<"The two length matrics is : "<<endl;
    for(int i=1;i<=sz;i++)
    {
        for(int j=1;j<=sz;j++)
        {
            cout<<two_length[i][j]<<" ";
        }
        cout<<endl;

    }

}
void show_num_of_path_of_two_length_of_pair_of_nodes(int sz)
{

    cout<<"The number of path with length two of every pair of nodes are : "<<endl;
    for(int i=1;i<=sz;i++)
    {
        for(int j=1;j<=sz;j++)
        {
            cout<<i<<"-->"<<j<<" = "<<two_length[i][j]<<endl;
        }


    }
}
void Create_three_length_matrics(int sz)
{

    for(int i=1;i<=sz;i++)
    {
        for(int j=1;j<=sz;j++)
        {
            three_length[i][j]=0;
        }

    }
    for(int i=1;i<=sz;i++)
    {
        for(int j=1;j<=sz;j++)
        {
            for(int k=1;k<=sz;k++)
            {
                three_length[i][j]+=two_length[i][k]*adj[k][j];
            }

        }

    }
}

void show_three_length_matrics(int sz)
{
    cout<<"The three length matrics is : "<<endl;
    for(int i=1;i<=sz;i++)
    {
        for(int j=1;j<=sz;j++)
        {
            cout<<three_length[i][j]<<" ";
        }
        cout<<endl;

    }

}
void show_num_of_path_of_three_length_of_pair_of_nodes(int sz)
{
    cout<<"The number of path with length three of every pair of nodes are : "<<endl;
    for(int i=1;i<=sz;i++)
    {
        for(int j=1;j<=sz;j++)
        {
            cout<<i<<"-->"<<j<<" = "<<three_length[i][j]<<endl;
        }


    }
}
void Create_b_matrics(int sz)
{
    for(int i=1;i<=sz;i++)
    {
        for(int j=1;j<=sz;j++)
        {
           b[i][j]=0;
        }


    }
    for(int i=1;i<=sz;i++)
    {
        for(int j=1;j<=sz;j++)
        {
            b[i][j]=(adj[i][j]+two_length[i][j]+three_length[i][j]);
            
        }
       


    }


}
void show_b_matrics(int sz)
{
    cout<<"The b matrics is : "<<endl;
    for(int i=1;i<=sz;i++)
    {
        for(int j=1;j<=sz;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Create_path_matrics(int sz)
{
    for(int i=1;i<=sz;i++)
    {
        for(int j=1;j<=sz;j++)
        {
            path[i][j]=0;
        }


    }
    for(int i=1;i<=sz;i++)
    {
        for(int j=1;j<=sz;j++)
        {
            if(b[i][j]!=0)
                path[i][j]=1;
        }


    }
}
void show_path_matrics(int sz)
{
    cout<<"The path matrics is : "<<endl;
    for(int i=1;i<=sz;i++)
    {
        for(int j=1;j<=sz;j++)
        {
            cout<<path[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Is_strongly_connected(int sz)
{
    for(int i=1;i<=sz;i++)
    {
        for(int j=1;j<=sz;j++)
        {
            if(path[i][j]==0)
            {
                cout<<"The matrics is not strongly connected"<<endl;
                return;
            }
        }

    }
    cout<<"The matrics is strongly connected"<<endl;
}
int main()
{
    int n;
    cout<<"enter the number of nodes"<<endl;
    cin>>n;
    Create_adj_matrix(n);
    show_adj_matrics(n);
    show_adj(n);
    Create_two_length_matrics(n);
    show_two_length_matrics(n);
    show_num_of_path_of_two_length_of_pair_of_nodes(n);
    Create_three_length_matrics(n);
    show_three_length_matrics(n);
    show_num_of_path_of_three_length_of_pair_of_nodes(n);
    Create_b_matrics(n);
    show_b_matrics(n);
    Create_path_matrics(n);
    show_path_matrics(n);
    Is_strongly_connected(n);

}
