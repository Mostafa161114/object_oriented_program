#include<iostream>

using namespace std;

class base
{
    public:
    double d1, d2;
    void set_dimension(double x, double y)
    {
        d1=x;
        d2=y;
    }
    virtual void show_area()=0;
};

class triangle : public base
{
    public:
    void show_area()
    {
        cout<<"area of triangle : "<<0.5*d1*d2<<endl;
    }
};

class rectangle : public base
{
    public:
    void show_area()
    {
        cout<<"area of rectangle : "<<d1*d2<<endl;
    }
};

int main()
{
    triangle tob;
    rectangle rob;
    base *p;

    tob.set_dimension(12,2);
    p=&tob;
    p->show_area();

    rob.set_dimension(33,22);
    p=&rob;
    p->show_area();

    return 0;
}
