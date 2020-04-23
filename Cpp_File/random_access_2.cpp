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

    io.seekp(10,ios::beg);
    io.put('?');

    io.seekp(-13,ios::end);
    io.put('!');

    io.seekp(-6,ios::cur);
    io.put(';');

    io.seekp(9,ios::cur);
    io.put('>');

    io.close();
    return 0;
}
