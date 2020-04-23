#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int *p;
    p = (int *)malloc(sizeof(int)*5);
    int i;
    cout<<"give input : "<<endl;
    for(i=0;i<5;i++)
        cin>>p[i];
    cout<<"output : "<<endl;
    for(i=0;i<5;i++)
        cout<<p[i]<<endl;
    free(p);
    return 0;
}
