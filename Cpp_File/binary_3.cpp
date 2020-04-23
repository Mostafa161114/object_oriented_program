#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin;
    int x;
    fin.open("test.txt");
    fin.read((char *) &x, sizeof(x));
    fin.close();
    cout<<x;
    return 0;
}
