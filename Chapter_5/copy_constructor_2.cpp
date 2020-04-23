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


void func(myclass obj)
{
    cout<<"func"<<endl;
}

int main()
{
    myclass ob;
    func(ob);
    return 0;
}
