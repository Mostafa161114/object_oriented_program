#include<iostream>

using namespace std;

void func(int a=0, int b=0)
{
    cout<<a<<" "<<b<<endl;
}

int main()
{
    func();
    func(10);
    func(10,12);
    return 0;
}
