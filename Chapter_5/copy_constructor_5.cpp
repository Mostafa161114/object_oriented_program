#include<iostream>

using namespace std;

class myclass
{
    public:
    myclass()
    {
        cout<<"constructor"<<endl;
    }
    ~myclass()
    {
        cout<<"destructor"<<endl;
    }
};

int main()
{
    myclass ob1, ob2;
    return 0;
}
