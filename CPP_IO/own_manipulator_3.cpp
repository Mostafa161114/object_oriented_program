#include<iostream>
#include<iomanip>

using namespace std;

ostream & sethex(ostream &output)
{
    output.unsetf(ios::dec|ios::oct);
    output.setf(ios::hex|ios::showbase|ios::uppercase);
    return output;
}

ostream & unsethex(ostream &output)
{
    output.unsetf(ios::hex|ios::showbase|ios::uppercase);
    return output;
}

int main()
{
    cout<<sethex<<10<<endl;
    cout<<unsethex<<10<<endl;
    return 0;
}
