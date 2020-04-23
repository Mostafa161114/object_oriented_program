#include<iostream>

using namespace std;

class myclass
{
    int a;
    public:
    myclass()
    {
        cout<<"CONSTRUCTING\n";
    }
    ~myclass()
    {
        cout<<"DESTRUCTING\n";
    }
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
    sqr(o);
    cout<<o.get()<<endl;;
    return 0;
}
