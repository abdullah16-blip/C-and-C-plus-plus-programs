# include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;


void display(int arr[],int sz)
{
    for(int i=1;i<=sz;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}

void insert_bst(int arr[],int sz,int x)
{
    int i=1;

    while(arr[i]!=-1){
        if(arr[i]==x)
        {
            cout<<x<<" is already in the tree position "<<i<<endl;
            return;

        }
        else
        {
            if(x<arr[i])
            {
                i=i*2;
            }
            else
            {
                i=i*2+1;
            }
        }

    }
    arr[i]=x;


}



int main()
{
    int depth;
    cout<<"enter the depth of the tree"<<endl;
    cin>>depth;
    int size=pow(2,depth+1)-1;
    int array[size+1];
    for(int i=1;i<=size;i++)
        array[i]=-1;
    int max=size;

    int n;
    while(max--)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        else
            insert_bst(array,size,n);
    }
    //display(array,size);
    cout<<"positions-> ";
    for(int i=1;i<=size;i++)
    {
        if(array[i]!=-1)
            cout<<i<<" ";
    }
    cout<<endl;
    cout<<"   values-> ";
    for(int i=1;i<=size;i++)
    {
        if(array[i]!=-1)
            cout<<array[i]<<" ";
    }
    cout<<endl;
}

