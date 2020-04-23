#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
    double x[5];
    ifstream fin;
    fin.open("array.txt");
    if(fin==0)
    {
        cout<<"no such file exists";
        exit(1);
    }
    fin.read((char *) & x, sizeof(x));
    for(int i=0;i<5;i++)
        cout<<x[i]<<endl;
    fin.close();
    return 0;
}
