#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("append.txt",ios::app);
    fout<<"xyz";
    fout.close();

    return 0;
}
