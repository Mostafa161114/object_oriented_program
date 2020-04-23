#include<iostream>

using namespace std;

class myclass
{
    int a;
    public:
    myclass(int x)
    {
        a=x;
    }
    void show()
    {
        cout<<a<<endl;
    }
};

int main()
{
    myclass ob(120);
    myclass *p;
    p=&ob;
    ob.show();
    (*p).show();
     p->show();
    return 0;
}
