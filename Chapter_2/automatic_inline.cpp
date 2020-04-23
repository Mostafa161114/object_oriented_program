#include<iostream>

using namespace std;

class myclass
{
    int a;
    public:
    void set_a(int x)
    {
        a=x;
    }
    void show_a();
};

void myclass :: show_a()
{
    cout<<a<<endl;
}


int main()
{
    myclass ob;
    ob.set_a(29);
    ob.show_a();
}
