//solution for problems with getline()

#include<iostream>

using namespace std;

int main()
{
    char city[20], d;

    cout<<"enter city name : ";
    cin>>city;
    cout<<"city name : "<<city<<endl;

    cin.get(d);
    cout<<"enter city name again : ";
    cin.getline(city,20);
    cout<<"city name : "<<city<<endl;

    cout<<"enter another city name : ";
    cin.getline(city,20);
    cout<<"city name : "<<city<<endl;

    return 0;
}
