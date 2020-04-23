#include<iostream>

using namespace std;

template<typename U>
class myclass
{
    U a;
    public:
    void set()
    {
        cin>>a;
    }
    void show()
    {
        cout<<a<<endl;
    }
};

int main()
{
    myclass<int> ob1;
    ob1.set();
    ob1.show();

    myclass<double> ob2;
    ob2.set();
    ob2.show();

    return 0;
}
