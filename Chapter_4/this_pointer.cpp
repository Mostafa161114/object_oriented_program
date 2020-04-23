#include<iostream>

using namespace std;

class myclass
{
    int a;
    public:
    void set(int x)
    {
        a=x;
        //this->a=x;
    }
    void show()
    {
        cout<<a<<endl;
        //cout<<this->a<<endl;
    }
};


int main()
{
    myclass ob1, ob2;
    ob1.set(22);
    ob2.set(34);
    ob1.show();
    ob2.show();
    return 0;
}
