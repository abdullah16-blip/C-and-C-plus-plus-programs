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
int find_left_child(int arr[],int sz,int x)
{
    int k,j=0;
    for(int i=1;i<=sz;i++)
    {
        if(arr[i]==x)
        {


            k= arr[i*2];
            j++;
            break;


        }
        if(j)
        {
            return k;
        }
       else
        {
           cout<<"There is no such node "<<x<<endl;
           return -1;
        }
    }
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
int find_right_child(int arr[],int sz,int x)
{
    int k,j=0;
    for(int i=1;i<=sz;i++)
    {
        if(arr[i]==x)
        {


            k= arr[i*2+1];
            j++;
            break;


        }
        if(j)
        {
            return k;
        }
        else
        {
            cout<<"There is no such node "<<x<<endl;
            return -1;
        }
    }
}
int find_parent(int arr[],int sz,int x)
{
    for(int i=1;i<=sz;i++)
    {
        if(arr[i]==x)
        {
            return arr[i/2];
        }
    }
    cout<<"There is no node of "<<x<<endl;
    return -1;

}
int main()
{
    int depth;
    cout<<"enter the depth of the tree"<<endl;
    cin>>depth;
    int size=pow(2,depth+1)-1;
    int array[size+1];
    create(array,size);
    display(array,size);
   /* cout<<"enter the value which left and right child you want"<<endl;
    int n;
    cin>>n;
    cout<<"The left child of "<<n<<" is "<<find_left_child(array,size,n)<<endl;
    cout<<"The right child of "<<n<<" is "<<find_right_child(array,size,n)<<endl;
    cout<<"Enter which parent do you want"<<endl;
    int m;
    cin>>m;
    cout<<"The parent of "<<m<<" is "<<find_parent(array,size,m)<<endl;*/
   //insert_bst(array,size,3);
   //display(array,size);
   preorder(array);
}
