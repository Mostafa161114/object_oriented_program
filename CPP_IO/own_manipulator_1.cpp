#include<iostream>
#include<iomanip>

using namespace std;

ostream & currency(ostream &output)
{
    output<<"TK";
    return output;
}

ostream & form(ostream &output)
{
    output.setf(ios::showpos);
    output.fill('*');
    output.precision(2);
    output.setf(ios::fixed,ios::floatfield);
    output.width(10);
    return output;
}

int main()
{
    cout<<currency<<form<<7864.5;
    return 0;
}
