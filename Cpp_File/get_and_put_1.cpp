#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;
    char ch;
    fout.open("char.txt");
    while(1)
    {
        cin.get(ch);

        fout.put(ch);
        if(ch=='$')
            break;
    }

    fout.close();
    return 0;
}
