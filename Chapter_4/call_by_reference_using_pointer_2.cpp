#include<iostream>

using namespace std;

class myclass
{
    int a;
    public:
    void set(int x)
    {
        a=x;
    }
    int get()
    {
        return a;
    }
};

void sqr(myclass *obj)
{
    int val;
    val=obj->get() * obj->get();
    obj->set(val);
}

int main()
{
    myclass o;
    o.set(11);
    cout<<o.get()<<endl;
    sqr(&o);
    cout<<o.get()<<endl;
    return 0;
}
