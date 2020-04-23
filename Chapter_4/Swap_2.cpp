#include<iostream>

using namespace std;

void s(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}

int main()
{
    int p, q, t;
    p=15;
    q=8;
    s(p,q);
    cout<<p<<" "<<q<<endl;
    return 0;
}
