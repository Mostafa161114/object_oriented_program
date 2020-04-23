#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    char ch;

    fin.open("in.txt");
    fout.open("out.txt");
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
        if(ch==' ')
            fout.put('|');
        else
            fout.put(ch);
    }
    fin.close();
    fout.close();
    return 0;
}
