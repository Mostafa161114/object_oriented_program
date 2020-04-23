#include<iostream>

using namespace std;

class base
{
    public:
    int i;
};

class derived1 :virtual public base
{
    public:
    int j;
};

class derived2 :virtual public base
{
    public:
    int k;
};

class derived3 : public derived1, public derived2
{
    public:
    int product()
    {
        return i*j*k;
    }
};

int main()
{
    derived3 o;
    o.i=10;
    o.j=3;
    o.k=5;

    cout<<o.product()<<endl;
    return 0;
}
