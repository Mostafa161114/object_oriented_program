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
    void show()
    {
        cout<<a<<endl;
    }
};

myclass input()
{
    myclass obj;
    obj.set(12);
    return obj;
}

int main()
{
    myclass o;
    o=input();
    o.show();
    return 0;
}
