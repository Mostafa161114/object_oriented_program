#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("manip.txt");
    fout<<hex<<10<<endl<<oct<<10<<endl<<dec<<10<<endl;
    fout.close();
    return 0;
}
