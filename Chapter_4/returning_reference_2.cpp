#include<iostream>

using namespace std;

int x;

int & f()
{
    return x;
}


int main()
{
    x=11;
    f()=100;
    cout<<x<<endl;
    return 0;
}
