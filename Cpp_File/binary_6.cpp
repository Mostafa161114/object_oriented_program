#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("string.txt");
    char str[]="chittagong";
    //fout<<str<<endl;
    //fout<<"\n";
    //fout<<endl;
    //fout.write((char *) &str, sizeof(str));
    //fout.write(str,strlen(str));
    fout<<'\n';
    fout.close();
    return 0;
}
