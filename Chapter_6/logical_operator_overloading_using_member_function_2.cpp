#include<iostream>

using namespace std;

class coord
{
    int x, y;
    public:
    coord()
    {
        x=0;
        y=0;
    }
    coord(int a, int b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<x<<" "<<y<<endl;
    }
    bool operator||(coord o)
    {
        if((this->x || o.x)|| (this->y || o.y))
            return true;
        else
            return false;
    }
};

int main()
{
    coord ob1(0,0), ob2(0,-5), ob3(0,0);
    if(ob1||ob3)
        cout<<"at least one member is non_zero";
    else
        cout<<"all members are zero";
    return 0;
}
