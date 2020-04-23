#include<iostream>

using namespace std;

class base
{
    public:
    virtual void func()
    {
        cout<<"base version"<<endl;
    }
};

class derived1 : public base
{
    public:
    void func()
    {
        cout<<"derived1 version"<<endl;
    }
};

class derived2 : public base
{
    public:
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
