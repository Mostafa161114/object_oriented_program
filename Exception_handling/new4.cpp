#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    double *p;

    while(1)
    {
        p=new(nothrow) double[1000000];
        if(p==0)
        {
            cout<<"allocation error\n";
            exit(1);
        }
        else
        {
            cout<<"allocation OK\n";
        }
    }
    return 0;
}
