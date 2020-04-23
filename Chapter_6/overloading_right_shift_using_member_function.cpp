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
    coord operator>>(int i)
    {
        coord temp;
        temp.x=this->x>>i;
        temp.y=this->y>>i;
        return temp;
    }
};

int main()
{
    coord ob1(40,24), ob2;
    ob2=ob1>>3;
    ob1.show();
    ob2.show();
    return 0;
}
