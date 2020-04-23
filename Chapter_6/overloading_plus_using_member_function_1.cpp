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
    coord operator+(coord o)
    {
        coord temp;
        temp.x=this->x+o.x;
        temp.y=this->y+o.y;
        return temp;
    }
};

int main()
{
    coord ob1(11,3), ob2(22,5), ob3;
    ob3=ob1+ob2;
    ob1.show();
    ob2.show();
    ob3.show();
    return 0;
}
