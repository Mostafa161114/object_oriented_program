#include<iostream>


using namespace std;

template<typename U1, typename U2>
void func(U1 a, U2 b)
{
    cout<<a<<" "<<b<<endl;
}

int main()
{
    func(12,1.222);
    func(3, 'a');
    return 0;
}
