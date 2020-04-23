#include<iostream>

using namespace std;

int main()
{
    cout.unsetf(ios::dec);
    //cout.setf(ios::hex);
    cout.setf(ios::hex|ios::showbase|ios::uppercase);
    //cout.setf(ios::oct);
    //cout.setf(ios::oct|ios::showbase);
    cout<<11;
    return 0;
}
