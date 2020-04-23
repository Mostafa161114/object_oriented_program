#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
    char ch;
    ifstream fin;
    ofstream fout;
    fin.open("file_1.txt");
    fout.open("file_2.txt");
    if(fin==0)
    {
        cout<<"no such file exists";
        exit(1);
    }
    while(1)
    {
        fin.get(ch);
        //fin>>ch;
        if(fin.eof())
            break;
        fout<<ch;
    }
    fin.close();
    fout.close();
    return 0;
}
