# include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
void create(int arr[],int sz)
{
    cout<<"Enter the value of root"<<endl;
    cin>>arr[1];
    int i=2,j=1;
    int x;
    while(i<=sz)
    {
        if(arr[j]!=-1)
        {
            cout<<"Enter the left child of "<<arr[j]<<endl;
            cin>>arr[i];
            cout<<"Enter the right child of "<<arr[j]<<endl;
            cin>>arr[i+1];


        }

        i+=2;
        j++;
    }
}

void display(int arr[],int sz)
{
    for(int i=1;i<=sz;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}

void preorder(int arr[])
{
    stack <int> s;
    int p;
    int i=1;

    while(arr[i]!=-1 || !s.empty())
    {
        if(arr[i]!=-1)
        {
            //cout<<arr[i]<<" ";
            s.push(i);
            i=i*2;
        }
        else
        {
            p=s.top();
            cout<<arr[p];
            s.pop();
            i=p*2+1;
        }


    }


}
void postorder(int arr[],int sz)
{  stack<int>s;
    int p,q;
    int i=1;
    while(arr[i]!=-1 || !s.empty())
    {
        if(arr[i]!=-1)
        {
            s.push(i);
            if(arr[i*2+1]!=-1)
            {
                int m=-(i*2+1);
                s.push(m);
            }
            i=i*2;
        }
        else
        {
            while( !s.empty() && s.top()>0)
            {
                p=s.top();
                cout<<arr[p]<<" ";
                s.pop();
            }
            q=s.top();
            s.pop();
            q=abs(q);
            i=q;





        }

    }
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
    create(array,size);
    display(array,size);
    postorder(array,size);
    return 0;

}

