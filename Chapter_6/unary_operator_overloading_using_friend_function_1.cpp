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
    friend void operator++(coord &o)
    {
        o.x=o.x+1;
        o.y=o.y+1;
    }
};

int main()
{
    coord ob(9,5);
    ob.show();
    ++ob;
    ob.show();
    return 0;
}
