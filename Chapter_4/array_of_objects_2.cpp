#include<iostream>

using namespace std;

class myclass
{
    int a;
    public:
    myclass(int x)
    {
        a=x;
    }
    void show()
    {
        cout<<a<<endl;
    }
};

int main()
{
    myclass ob[4] = {11,22,33,44};
    int i;
    for(i=0;i<4;i++)
        ob[i].show();
    return 0;
}
