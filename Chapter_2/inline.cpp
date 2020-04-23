#include<iostream>

using namespace std;

inline int add(int x, int y)
{
    return x+y;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<add(a,b);
    return 0;
}
