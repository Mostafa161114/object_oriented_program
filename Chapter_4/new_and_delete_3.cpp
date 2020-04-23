#include<iostream>

using namespace std;

int main()
{
    int *p;
    p = new int[5];
    int i;
    cout<<"give input : "<<endl;
    for(i=0;i<5;i++)
        cin>>p[i];
    cout<<"output : "<<endl;
    for(i=0;i<5;i++)
        cout<<p[i]<<endl;
    delete [] p;
    return 0;
}
