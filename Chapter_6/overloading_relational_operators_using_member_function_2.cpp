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
    bool operator<(coord o)
    {
        if((this->x < o.x)&&(this->y < o.y))
            return true;
        else
            return false;
    }
};

int main()
{
    coord ob1(11,3), ob2(22,5);
    if(ob1<ob2)
        cout<<"members of the first object are lower than the members of the second object";
    else
        cout<<"members of the first object are not lower than the members of the second object";
    return 0;
}
