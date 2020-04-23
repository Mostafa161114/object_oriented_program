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

int sqr(myclass obj)
{
    int val;
    val=obj.get()*obj.get();
    return val;
}

int main()
{
    myclass o;
    o.set(11);
    cout<<sqr(o)<<endl;
    cout<<o.get();
    return 0;
}
