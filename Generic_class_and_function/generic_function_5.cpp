#include<iostream>

using namespace std;

template<typename U>
void func(U a)
{
    cout<<"from generic function "<<a<<endl;
}

void func(double a)
{
    cout<<"from non_generic function "<<a<<endl;
}

int main()
{
    func(12);
    func('a');
    func(2.3);
    return 0;
}
