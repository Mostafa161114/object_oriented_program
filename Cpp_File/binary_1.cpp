#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;
    int a = 123456789;
    fout.open("test.txt");
    fout<<a;
    fout.close();
    return 0;
}
