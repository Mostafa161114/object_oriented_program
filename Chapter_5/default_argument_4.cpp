#include<iostream>

using namespace std;

class myclass
{
    int a;
    public:
    myclass(int x=0)
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
    myclass ob1, ob2(12);
    ob1.show();
    ob2.show();
    return 0;
}
