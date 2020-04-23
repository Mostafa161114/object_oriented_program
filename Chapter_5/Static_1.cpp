#include<iostream>

using namespace std;

class myclass
{
    public:
    int x;
    static int y;
};

int myclass :: y;

int main()
{
    myclass ob1, ob2;
    ob1.x=30;
    ob2.x=40;
    cout<<ob1.x<<" "<<ob2.x<<endl;
    ob1.y=88;
    ob2.y=99;
    cout<<ob1.y<<" "<<ob2.y<<endl;
    return 0;
}
