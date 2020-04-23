#include<iostream>

using namespace std;

class coord
{
    int x[5];
    public:
    int & operator[](int indx)
    {
        return x[indx];
    }
    void show()
    {
        int i;
        for(i=0;i<5;i++)
            cout<<x[i]<<" ";
        cout<<endl;
    }
};


int main()
{
    coord ob;
    ob[0] = 11;
    ob[1] = 22;
    ob[2] = 33;
    ob[3] = 44;
    ob[4] = 55;
    ob.show();
    return 0;
}
