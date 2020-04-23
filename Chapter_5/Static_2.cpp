
#include<iostream>

using namespace std;

class myclass
{
    public:
    int x;
    static int y;
    static void f1()
    {
        y=3;
        //x=5;
        cout<<"f1()"<<endl;
    }
    void f2()
    {
        cout<<"f2()"<<endl;
    }
};

int myclass :: y;

int main()
{
    myclass ob1;
    ob1.f1();
    myclass :: f1();
    ob1.f2();
//    myclass :: f2();

    return 0;
}
