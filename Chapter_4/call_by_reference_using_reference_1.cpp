#include<iostream>

using namespace std;

void func(int &x)
{
    x=2;
}

int main()
{
    int a;
    a=30;
    func(a);
    cout<<a;
    return 0;
}
