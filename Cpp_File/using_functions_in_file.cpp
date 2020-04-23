#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("func.txt");
    fout.unsetf(ios::dec);
    fout.setf(ios::hex);
    fout<<10<<endl;
    fout.unsetf(ios::hex);
    fout.setf(ios::oct);
    fout<<10<<endl;
    fout.unsetf(ios::oct);
    fout<<10<<endl;
    fout.close();
    return 0;
}
