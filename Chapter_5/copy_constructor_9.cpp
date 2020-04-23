
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




int main()
{
    myclass ob1;
    myclass ob2;
    ob2=ob1;
    return 0;
}
