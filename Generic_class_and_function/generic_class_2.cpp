#include<iostream>

using namespace std;

template<typename U1, typename U2>
class myclass
{
    U1 x;
    U2 y;
    public:
    void set()
    {
        cin>>x;
        cin>>y;
    }
    void show()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    myclass<int,double> ob1;
    ob1.set();
    ob1.show();

    myclass<int, char>ob2;
    ob2.set();
    ob2.show();

    return 0;
}
