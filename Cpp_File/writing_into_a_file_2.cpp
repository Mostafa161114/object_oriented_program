#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;

    fout.open("country.txt");
    fout<<"USA"<<endl<<"UK"<<endl<<"KSA";
    fout.close();

    fout.open("capital.txt");
    fout<<"Washington"<<endl<<"London"<<endl<<"Riyad";
    fout.close();

    return 0;
}
