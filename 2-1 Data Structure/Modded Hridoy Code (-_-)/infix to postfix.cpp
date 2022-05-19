#include <iostream>
using namespace std;
struct stack
{
    char data;
    struct stack *next;
}*top=0;
void push(char x)
{
    struct stack *t;
    t=new stack();
    t->data=x;
    t->next=NULL;
    if(t==0)
    {
        cout<<"stack overflow";
    }
    else
    {
        t->next=top;
        top=t;
    }
}
char pop()
{
    char x;
    if(top==0)
        cout<<"stack underflow";
    else
    {
        x=top->data;
        top=top->next;
        return x;
    }
}
int Is_operator(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 1;
    else
        return 0;
}
int precedence(char x)
{
    if(x=='*' || x=='/')
        return 4;
    if(x=='+' || x=='-')
        return 2;
}
 string infix_to_postfix(string str)
{
    string s="";
    for(int i=0;i<str.size();i++)
    {
        if(Is_operator(str[i]))
        {
            if(top==0)
            {
                push(str[i]);
            }
            else
                {
                   if(precedence(top->data)<precedence(str[i]))
                   {
                       push(str[i]);
                   }
                   else
                   {
                       while(top)
                       {
                           s+=pop();

                       }
                       push(str[i]);
                   }
                }
        }
        else
        {
            s+=str[i];
        }

    }
    while(top!=0)
    {
        s+=pop();

    }
    s+='\0';
    return s;

}

int main() {
    string in;

    cin>>in;//for taking a equation.
    cout<<infix_to_postfix(in);
    return 0;
}

