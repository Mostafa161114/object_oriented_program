#include<iostream>

using namespace std;

class myclass
{
    int a;
    public:
    void set(int x)
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
    myclass ob[4];
    int i;
    for(i=0;i<4;i++)
        ob[i].set(i*i);
    for(i=0;i<4;i++)
        ob[i].show();
    return 0;
}
