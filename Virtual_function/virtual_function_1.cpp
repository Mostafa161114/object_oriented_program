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
    void showx()
    {
        cout<<x<<endl;
    }
};

class derived : public base
{
    int y;
    public:
    void sety(int i)
    {
        y=i;
    }
    void showy()
    {
        cout<<y<<endl;
    }
};

int main()
{
    base *p;
    base b_ob;
    derived d_ob;

    p=&b_ob;
    p->setx(100);
    p->showx();

    p=&d_ob;
    p->setx(19);
    p->showx();
    d_ob.sety(200);
    d_ob.showy();

    return 0;
}
