#include<iostream>

using namespace std;

class myclass
{
    int a,b;
    public:
    myclass(int x, int y);
    void show();
};

myclass :: myclass(int x, int y)
{
    cout<<"in constructor\n";
    a=x;
    b=y;
}

void myclass :: show()
{
    cout<<a<<" "<<b<<endl;
}

int main()
{
    int p, q;
    cout<<"enter two integers : ";
    cin>>p>>q;
    myclass ob(p,q);
    ob.show();
    return 0;
}
