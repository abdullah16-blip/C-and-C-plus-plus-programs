#include<bits/stdc++.h>
using namespace std;
int n,m,longRoom = 0;
string input[1010];
int cnt;
int  visitedList[1010][1010]={0};
int Isvisit(int x,int y)
{
    if(visitedList[x][y])
    return 1;
    else 
    return 0;
}
void dfs(int x,int y)
{   
    visitedList[x][y]=1;
    if(x-1>=0 and input[x-1][y]=='.' and Isvisit(x-1,y)==0 )
    {   
        dfs(x-1,y);
    }
     if(x+1<=n and input[x+1][y]=='.' and Isvisit(x+1,y)==0 )
    {
        dfs(x+1,y);
    }
     if(y-1>=0 and input[x][y-1]=='.' and Isvisit(x,y-1)==0 )
    {
        dfs(x,y-1);
    }
     if(y+1<=m and input[x][y+1]=='.' and Isvisit(x,y+1)==0 )
    {
        dfs(x,y+1);
    }
}
 
int rooms(int x,int y)
{
    int count = 0;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(input[i][j]=='.' and Isvisit(i,j)==0)
            {   cnt++;
                dfs(i,j);
            }
         count = 0;
        for(int p = 0; p < x; p++)
        {
            for(int r = 0; r < y; r++)
            {
                if(visitedList[p][r] == 1)
                {

                    count = count + 1;
                    visitedList[p][r] = 2;
                }
            }
        }
       // cout<<count<<endl;
            if(longRoom < count)
                longRoom = count;
        }
       
    }
    return cnt;
}
int main()
{
    
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
   cout<< rooms(n,m)<<" and long room is "<<longRoom;
}