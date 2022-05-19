#include<bits/stdc++.h>
using namespace std;
#define mx 20
int top=-1;
float arr[mx];
void push(float x)
{
    if(top==mx-1)
    {
        cout<<"stack overflow"<<endl;
        return;
    }
    else
    {
        top++;
        arr[top]=x;
    }
}
float pop()
{
    if(top==-1)
    {
        cout<<"stack underflow"<<endl;
        return -1;
    }
    else
    {
        int p=top;
        top--;
        return arr[p];
    }
}
void show_stack()
{
    while(top!=-1)
    {
        cout<<arr[top]<<" ";
        top--;
    }
}
float operate( char x )
{
    float a,b,c;
    a=pop();
    b=pop();
    
    if(a==-1 || b==-1)
    return -1;
    if(x=='+')
    {
        c=b+a;
        return c;
    }
    else if(x=='-')
    {
        c=b-a;
        return c;
    }
    else if(x=='*')
    {
        c=b*a;
        return c;
    }
    else
    {
        c=b/a;
        return c;
    }
}
int main ()
{
    string exp;
    cin>>exp;
    int i=0;
  
    
    while(i<exp.length())
    {   
        string oper;
        int j=0;
        if(isdigit(exp[i]))
        {
            while(exp[i]!=',')
            {
                oper[j++]=exp[i++] ;
                
            }
           
            oper[j]='\0';
            push(stof(oper));
            
            i++;
            
        }
     
        if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/')
        {
            float m=operate(exp[i]);
            if(m==-1)
            {
                cout<<"the expression is vulval";
                return 0;
            }
            
            push(m);
            i=i+2;
            
        }
       
    }
    
    cout<<"The solution is "<<pop();
}