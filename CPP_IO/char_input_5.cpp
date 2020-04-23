//solution 2 for get() problem
#include<iostream>

using namespace std;

int main()
{
    char ch, d;
    cout<<"input a letter : ";
    cin>>ch;
    cout<<"the letter is : ";
    cout<<ch;
    cout<<endl;
    cin.get(d);
    cout<<"input another letter : ";
    cin.get(ch);
    cout<<"the letter is : ";
    cout<<ch;
    return 0;
}
