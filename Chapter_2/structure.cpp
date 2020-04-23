#include<iostream>
#include<cstring>

using namespace std;

struct st
{
    st(double b, char *n)
    {
        balance = b;
        strcpy(name,n);
    }
    void show()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Balance : "<<balance<<endl<<endl;
    }
    private:
    double balance;
    char name[30];
};

int main()
{
    st acc1(100.12,"Johnson");
    st acc2(-12.34,"Hedricks");

    acc1.show();
    acc2.show();
    return 0;
}
