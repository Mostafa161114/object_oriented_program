#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
    ifstream fin;
    char ch;
    int count=0;

    fin.open("in.txt");
    if(fin==0)
    {
        cout<<"no such file exists";
        exit(1);
    }
    while(1)
    {
        fin.get(ch);
        if(fin.eof())
            break;
        if(ch!='\n')
            count++;
    }
    fin.close();

    cout<<"total character : "<<count;
    return 0;
}
