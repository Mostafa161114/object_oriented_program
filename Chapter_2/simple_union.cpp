#include<iostream>

using namespace std;

union u
{
    int a, b, c;
};

int main()
{
    u ob;
    ob.a=10;
    ob.b=20;
    ob.c=30;
    cout<<ob.a<<endl;
    return 0;
}
