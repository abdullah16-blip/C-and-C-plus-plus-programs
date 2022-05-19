#include<bits/stdc++.h>
using namespace std;
int main()
{
    int numOfGroup;
    cin>>numOfGroup;
    int mostContentInAGroup;
    cin>>mostContentInAGroup;

    string twoD_arr[numOfGroup+1][mostContentInAGroup+1];
    string oneD_arr[100];
    int pointer_arr[numOfGroup+1];
    pointer_arr[1]=1;
    int groupSize[100];
    int count;
    int k=1;
    for(int i=1;i<=numOfGroup;i++)
    {   
        count=0;
        pointer_arr[i]=k;
        for(int j=1;j<=mostContentInAGroup;j++)
        {
            cin>>twoD_arr[i][j];
            if(twoD_arr[i][j]!="0")
            {
                oneD_arr[k]=twoD_arr[i][j];
                k++;
                count++;
            }
        }
        
        groupSize[i]=count;
    }
    int sizeOf_1d_arr=k-1;
    cout<<"Enter the group number"<<endl;
    int x;
    cin>>x;
    for(int i=pointer_arr[x];i<=pointer_arr[x]+groupSize[x]-1;i++)
    {
        cout<<oneD_arr[i]<<" ";
    }
}