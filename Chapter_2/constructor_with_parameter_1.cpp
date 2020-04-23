#include<iostream>

using namespace std;

class myclass
{
    int a;
    public:
    myclass(int x);
    void show();
};

myclass :: myclass(int x)
{
    cout<<"in constructor\n";
    a=x;
}

void myclass :: show()
{
    cout<<a<<"\n";
}

int main()
{
    myclass ob(20);
    ob.show();
    return 0;
}
