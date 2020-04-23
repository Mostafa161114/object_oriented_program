#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    double *p;

    while(1)
    {
        try
        {
                p=new double[1000000];
        }
        catch(bad_alloc o)
        {
            cout<<"caught exception\n";
            exit(1);
        }
    }
    return 0;
}
