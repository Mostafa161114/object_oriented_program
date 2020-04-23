#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    double d[5] = {1.2,2,3.45673,4.003,5.1};
    ofstream fout;
    fout.open("array.txt");
    fout.write((char *) & d, sizeof(d));
    fout.close();
    return 0;
}
