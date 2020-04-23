#include<iostream>

using namespace std;

void swap_arg_1(int &a, int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}

void swap_arg_2(double &a,double &b)
{
    double t;
    t=a;
    a=b;
    b=t;
}

int main()
{
    int i1=10, i2=20;
    cout<<"before swapping\n";
    cout<<i1<<" "<<i2<<endl;
    swap_arg_1(i1,i2);
    cout<<"after swapping\n";
    cout<<i1<<" "<<i2<<endl;

    double d1=2.444, d2=1.45;
    cout<<"before swapping\n";
    cout<<d1<<" "<<d2<<endl;
    swap_arg_2(d1,d2);
    cout<<"after swapping\n";
    cout<<d1<<" "<<d2<<endl;
}
