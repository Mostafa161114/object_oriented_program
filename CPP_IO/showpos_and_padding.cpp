#include<iostream>
#include<iomanip>


using namespace std;

int main()
{
    cout<<showpos<<9999<<endl;

    cout<<setw(10)<<9999<<endl;

    cout<<setw(10)<<internal<<9999<<endl;

    cout<<setfill('%')<<setw(10)<<9999<<endl;

    return 0;
}
