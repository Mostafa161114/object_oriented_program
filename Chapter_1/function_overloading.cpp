#include<iostream>

using namespace std;

int area(int a, int b)
{
    return a*b;
}

double area(int r)
{
    return 3.1416*r*r;
}

int main()
{
    int l, w, radius;
    cout<<"input length and width of rectangle : ";
    cin>>l>>w;
    cout<<"area of rectangle is : "<<area(l,w)<<"\n";
    cout<<"input radius of the circle : ";
    cin>>radius;
    cout<<"area of circle is : "<<area(radius);
    return 0;
}
