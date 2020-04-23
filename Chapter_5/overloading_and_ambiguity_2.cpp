#include<iostream>

using namespace std;

void func(int x, int y)
{
    cout<<"hello"<<endl;
}

void func(int x, int &y)
{
    cout<<"welcome"<<endl;
}

int main()
{
    int a=10, b=12;
    func(a,b);
    return 0;
}
