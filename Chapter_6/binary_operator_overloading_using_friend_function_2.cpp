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
    friend coord operator+(coord o, int i)
    {
        coord temp;
        temp.x=o.x+i;
        temp.y=o.y+i;
        return temp;
    }
};

int main()
{
    coord ob1(11,3), ob2;
    ob2=ob1+10;
    ob1.show();
    ob2.show();
    return 0;
}
