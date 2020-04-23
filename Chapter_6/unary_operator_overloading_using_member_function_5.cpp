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
    coord operator-()
    {
        coord temp;
        temp.x=this->x * (-1);
        temp.y=this->y * (-1);
        return temp;
    }
};

int main()
{
    coord ob1(11,22), ob2;
    ob1.show();
    ob2.show();
    ob2=-ob1;
    ob1.show();
    ob2.show();
    return 0;
}

