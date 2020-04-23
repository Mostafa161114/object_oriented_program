#include<iostream>
#include<cstring>

using namespace std;

class cl
{
    double balance;
    char name[30];
    public:
    cl(double b, char *n)
    {
        balance = b;
        strcpy(name,n);
    }
    void show()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Balance : "<<balance<<endl<<endl;
    }
};

int main()
{
    cl acc1(100.12,"Johnson");
    cl acc2(-12.34,"Hedricks");

    acc1.show();
    acc2.show();
    return 0;
}
