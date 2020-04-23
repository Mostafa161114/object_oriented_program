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
    friend coord operator++(coord &o)
    {
        o.x=o.x+1;
        o.y=o.y+1;
        return o;
    }
};

int main()
{
    coord ob(9,5), ob2;
    ob.show();
    ob2.show();
    ob2=++ob;
    ob.show();
    ob2.show();
    return 0;
}
