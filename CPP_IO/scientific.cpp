#include<iostream>
#include<iomanip>

using namespace std;

int main()
{



    cout<<scientific<<setprecision(4)<<1234.567890123<<endl;
    cout<<.00000123456789<<endl;


    cout<<setw(15)<<setfill('*')<<1234.567890123<<endl;

    cout<<setw(15)<<.00000123456789<<endl;

    return 0;

}
