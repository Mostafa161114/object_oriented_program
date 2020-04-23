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

myclass func()
{
    myclass temp_ob;
    return temp_ob;
}


int main()
{
    myclass ob1;
    ob1=func();
    return 0;
}
