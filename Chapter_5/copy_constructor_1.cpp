#include<iostream>

using namespace std;

class myclass
{
    int a;
    public:
    myclass()
    {
        cout<<"normal constructor"<<endl;
    }
    myclass(myclass &o)
    {
        cout<<"copy constructor"<<endl;
    }
};


int main()
{
    myclass ob1;
    myclass ob2 =ob1;
    return 0;
}
