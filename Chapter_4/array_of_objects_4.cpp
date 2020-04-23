#include<iostream>

using namespace std;

class myclass
{
    int a, b;
    public:
    myclass(int x, int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    myclass ob[4] = {myclass(2,3),myclass(4,5),myclass(6,7),myclass(8,9)};
    int i;
    for(i=0;i<4;i++)
            ob[i].show();


    return 0;
}
