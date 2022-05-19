#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int sparse[n+1][m+1];
    int oneD[100];
    int k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>sparse[i][j];
            if(sparse[i][j]!=0)
            {
                oneD[k]=sparse[i][j];
                k++;
            }
        }
    }
    int size=k-1;
    int r,c;
    cin>>r>>c;
    cout<<oneD[((r*(r-1))/2)+c];
}