#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
    char ch;

    fstream io;
    io.open("letters.txt");
    if(io==0)
    {
        cout<<"no such file exists";
        exit(1);
    }

    io.seekg(5,ios::beg);
    io.get(ch);
    cout<<ch<<endl;

    io.seekg(-3,ios::end);
    io.get(ch);
    cout<<ch<<endl;

    io.seekg(-8,ios::cur);
    io.get(ch);
    cout<<ch<<endl;

    io.seekg(3,ios::cur);
    io.get(ch);
    cout<<ch<<endl;

    io.close();

    return 0;
}
