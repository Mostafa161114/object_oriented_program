#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int *p;
    p = (int *)malloc(sizeof(int));
    *p=12;
    cout<<*p;
    free(p);
    return 0;
}
