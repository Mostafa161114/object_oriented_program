#include<iostream>

using namespace std;



int main()
{
    union
    {
        int a, b;
    };
    a=10;
    cout<<b<<endl;
    b=20;
    cout<<b<<endl;
    cout<<a<<endl;
    return 0;
}
