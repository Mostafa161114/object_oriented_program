#include<iostream>

using namespace std;

void func(float f)
{
    cout<<"hello"<<endl;
}

void func(double d)
{
    cout<<"welcome"<<endl;
}

int main()
{
    float x=10.1;
    double y=3.2;
    func(x);
    func(y);
    func(11);
    return 0;
}
