#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
    ifstream fin;
    char ch;
    fin.open("words.txt");
    if(fin==0)
    {
        cout<<"no such file exists";
        exit(1);
    }
    int count=0;
    while(1)
    {
        fin.get(ch);
        if(fin.eof())
            break;
        if(ch==' ')
            count++;

    }
    fin.close();
    cout<<"total word : "<<count+1;
    return 0;
}
