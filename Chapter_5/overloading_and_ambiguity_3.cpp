#include<iostream>

using namespace std;

void func(int a)
{
    cout<<"hello";
}

void func(int a, int b=0)
{
    cout<<"welcome";
}

int main()
{
    func(10,12);
    func(10);
    return 0;
}
