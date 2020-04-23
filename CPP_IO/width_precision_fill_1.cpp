#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout<<setw(10)<<"hello"<<endl;

    cout<<setfill('%')<<setw(10)<<"hello"<<endl;

    cout<<left<<setw(10)<<"hello"<<endl;

    cout<<setprecision(10)<<setw(10)<<123.23456789<<endl;

    cout<<setw(10)<<setprecision(6)<<123.234567<<endl;

    return 0;
}
