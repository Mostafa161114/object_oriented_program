#include<iostream>
#include<iomanip>

using namespace std;

istream & skipchar(istream &input)
{
    char ch;
    for(int i=0;i<5;i++)
        input>>ch;
    return input;
}

int main()
{
    char str[40];
    cin>>skipchar>>str;
    cout<<str;
    return 0;
}
