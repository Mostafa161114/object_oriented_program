#include<iostream>

using namespace std;

class stack
{
    int a[5], t;
    public:
    void init()
    {
        t=-1;
    }
    void push()
    {
        int x;
        if(t==4)
            cout<<"OVERFLOW\n";
        else
        {
            t++;
            cout<<"input a value : ";
            cin>>x;
            a[t]=x;
        }
    }
    void pop();
    void show();
};

void stack :: pop()
{
    if(t==-1)
        cout<<"UNDERFLOW\n";
    else
        t--;
}

void stack :: show()
{
    if(t==-1)
        cout<<"stack is empty\n";
    else
    {
        cout<<"contents of stack are : ";
        for(int i=0;i<=t;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }

}

int main()
{
    int i;
    stack s;
    s.init();
    for(i=1;i<=10;i++)
        s.push();
    s.show();
    s.pop();
    s.show();
    for(i=1;i<=10;i++)
    {
        s.pop();
        s.show();
    }
    return 0;
}
