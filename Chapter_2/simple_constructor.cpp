#include<iostream>

using namespace std;

class myclass
{
    int a;
    public:
    myclass()
    {
        cout<<"in constructor\n";
        a=10;
    }
    void show()
    {
        cout<<a<<endl;
    }
};

int main()
{
    myclass ob;
    ob.show();
    return 0;
}
