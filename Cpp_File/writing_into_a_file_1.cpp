#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char name[10], address[10], phone[10];
    cout<<"input a name, address and phone number : ";
    cin>>name>>address>>phone;

    ofstream fout;
    fout.open("G:\\cpp\\info.txt");
    fout<<name<<endl<<address<<endl<<phone<<endl;
    fout.close();

    return 0;
}
