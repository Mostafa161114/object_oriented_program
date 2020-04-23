#include<iostream>

using namespace std;

class box
{
    double l,w,h,v;
    public:
    box(double x, double y, double z)
    {
        l=x;
        w=y;
        h=z;
        v=l*w*h;
    }
    void vol()
    {
        cout<<"the volume is : "<<v<<endl;
    }
};

int main()
{
    double a,b,c;

    cin>>a>>b>>c;
    box ob(a, b, c);
    ob.vol();
    return 0;
}
