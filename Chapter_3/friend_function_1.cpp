#include<iostream>

using namespace std;

class myclass
{
    int a;
    public:
    //friend int main();
};

int main()
{
    myclass ob;
    ob.a=10;
    cout<<ob.a;
    return 0;
}
