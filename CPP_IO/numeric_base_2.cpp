#include<iostream>

using namespace std;

int main()
{
    cout.unsetf(ios::dec);
    cout.setf(ios::hex|ios::showbase|ios::uppercase);
    cout<<11<<endl;
    cout.unsetf(ios::hex);
    cout.setf(ios::oct|ios::showbase|ios::uppercase);
    cout<<11;
    return 0;
}
