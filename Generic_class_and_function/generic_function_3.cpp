#include<iostream>

using namespace std;

template<class U>
void swap_arg(U &a, U &b)
{
    U t;
    t=a;
    a=b;
    b=t;
}

int main()
{
    int i1=10, i2=20;
    cout<<"before swapping\n";
    cout<<i1<<" "<<i2<<endl;
    swap_arg(i1,i2);
    cout<<"after swapping\n";
    cout<<i1<<" "<<i2<<endl;

    double d1=2.444, d2=1.45;
    cout<<"before swapping\n";
    cout<<d1<<" "<<d2<<endl;
    swap_arg(d1,d2);
    cout<<"after swapping\n";
    cout<<d1<<" "<<d2<<endl;
}
