//specialities of write()

#include<iostream>

using namespace std;

int main()
{
    char str[20] = "Programming";
    cout<<str<<endl;
    cout.write(str,20);
    cout<<endl;
    cout.write(str,4);
    cout<<endl;
    return 0;
}
