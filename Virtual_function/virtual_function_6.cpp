#include<iostream>

using namespace std;

class base
{
    public:
    virtual void func()
    {
        cout<<"using base version\n";
    }
};

class derived1 : public base
{
    void func()
    {
        cout<<"using derived1 version\n";
    }
};

class derived2 : public derived1
{
    void func()
    {
        cout<<"using derived2 version\n";
    }
};

int main()
{
    base *p;
    base b_ob;
    derived1 d_ob1;
    derived2 d_ob2;

    p=&b_ob;
    p->func();

    p=&d_ob1;
    p->func();

    p=&d_ob2;
    p->func();

    return 0;
}
