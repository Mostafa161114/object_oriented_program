#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
    char name[10],address[10],phone[10];

    //ifstream fin("info.txt");
    ifstream fin;
    fin.open("info.txt");
    if(fin==0)
    {
        cout<<"no such file exist"<<endl;
        exit(1);
    }

    fin>>name>>address>>phone;
    fin.close();

    cout<<name<<endl<<address<<endl<<phone<<endl;

    return 0;
}
