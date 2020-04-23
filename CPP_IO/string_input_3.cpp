//problems with getline() : it takes the enter from a previous input

#include<iostream>

using namespace std;

int main()
{
    char city[20];

    cout<<"enter city name : ";
    cin>>city;
    cout<<"city name : "<<city<<endl;


    cout<<"enter city name again : ";
    cin.getline(city,20);
    cout<<"city name : "<<city<<endl;

    cout<<"enter another city name : ";
    cin.getline(city,20);
    cout<<"city name : "<<city<<endl;

    return 0;
}
