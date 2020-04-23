#include<iostream>

using namespace std;

class myclass
{
    int a[3];
    public:
    void set(int x, int y, int z)
    {
        a[0]=x;
        a[1]=y;
        a[2]=z;
    }
    void show()
    {
        int i;
        for(i=0;i<3;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
};

int main()
{
    myclass ob1, ob2;
    ob1.set(11,22,33);
    ob2=ob1;
    ob2.show();
    return 0;
}
