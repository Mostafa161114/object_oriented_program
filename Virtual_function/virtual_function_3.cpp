#include<iostream>

using namespace std;

class base
{
    int x;
    public:
    void setx(int i)
    {
        x=i;
    }
    virtual void func()
    {
        cout<<"base version : "<<x<<endl;
    }
};

class derived1 : public base
{
    int y;
    public:
    void sety(int i)
    {
        y=i;
    }
    void func()
    {
        cout<<"derived1 version : "<<y*y<<endl;
    }
};

class derived2 : public base
{
    int z;
    public:
    void setz(int i)
    {
        z=i;
    }
    void func()
    {
        cout<<"derived2 version : "<<z+z<<endl;
    }
};

int main()
{
    base *p;

    base b_ob;
    b_ob.setx(10);

    derived1 d_ob1;
    d_ob1.sety(3);

    derived2 d_ob2;
    d_ob2.setz(4);

    p=&b_ob;
    p->func();

    p=&d_ob1;
    p->func();

    p=&d_ob2;
    p->func();

    return 0;
}
