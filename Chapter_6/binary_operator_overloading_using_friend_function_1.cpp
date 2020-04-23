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
    friend coord operator+(coord o1, coord o2)
    {
        coord temp;
        temp.x=o1.x+o2.x;
        temp.y=o1.y+o2.y;
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
