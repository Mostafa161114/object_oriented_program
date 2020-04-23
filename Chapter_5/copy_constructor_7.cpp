#include<iostream>

using namespace std;

class myclass
{
    public:
    myclass()
    {
        cout<<"constructor"<<endl;
    }
    myclass(myclass &o1)
    {
        cout<<"copy constructor"<<endl;
    }
    ~myclass()
    {
        cout<<"destructor"<<endl;
    }
};

void f(myclass obj)
{
    cout<<"from f()"<<endl;
}


int main()
{
    myclass ob;
    f(ob);
    return 0;
}
