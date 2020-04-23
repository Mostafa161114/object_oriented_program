#include<iostream>

using namespace std;

int main()
{
    int a=100;
    int *p;
    p = &a;
    *p=9;
    cout<<a<<endl;
    a=11;
    cout<<*p<<endl;
    return 0;
}
