#include<iostream>

using namespace std;

class myclass
{
    int a;
    public:
    myclass();
    void show()
    {
        cout<<a<<endl;
    }
    ~myclass();
};

myclass :: myclass()
{
    cout<<"in constructor\n";
    a=10;
}

myclass :: ~myclass()
{
    cout<<"destructing\n";
}

int main()
{
    myclass ob;
    ob.show();
    return 0;
}
