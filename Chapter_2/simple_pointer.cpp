#include<iostream>

using namespace std;

int main()
{
    int *p, a;
    p=&a;
    a=5;
    cout<<*p<<endl;
    *p=10;
    cout<<a<<endl;
    return 0;
}
