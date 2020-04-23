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
    friend coord operator+(int i, coord o)
    {
        coord temp;
        temp.x=i+o.x;
        temp.y=i+o.y;
        return temp;
    }
};

int main()
{
    coord ob1(11,3), ob2;
    ob2=10+ob1;
    ob1.show();
    ob2.show();
    return 0;
}
