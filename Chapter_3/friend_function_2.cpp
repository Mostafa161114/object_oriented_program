#include<iostream>

using namespace std;

class myclass
{
    int a, b;
    public:
    void set(int x, int y)
    {
        a=x;
        b=y;
    }
    friend bool is_factor(myclass o);
};

bool is_factor(myclass o)
{
    if(o.a%o.b==0)
        return true;
    else
        return false;
}

int main()
{
    myclass ob;
    ob.set(14,2);
    if(is_factor(ob))
    {
        cout<<"b is a factor of a"<<endl;
    }
    else
    {
        cout<<"b is not a factor of a"<<endl;
    }
    return 0;
}
