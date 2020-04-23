#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

istream & getpass(istream &input)
{
    cout<<'\a';
    cout<<"enter password : ";
    return input;
}

int main()
{
    char pw[100];

    while(1)
    {
        cin>>getpass>>pw;
        if(strcmp(pw,"12345")==0)
            break;
    }
    cout<<"login successful";
    return 0;
}
