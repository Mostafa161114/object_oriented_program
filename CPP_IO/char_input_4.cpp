//solution 1 for get() problem
#include<iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"input a letter : ";
    cin.get(ch);
    cout<<"the letter is : ";
    cout<<ch;
    cout<<endl;
    cout<<"input another letter : ";
    cin>>ch;
    cout<<"the letter is : ";
    cout<<ch;
    return 0;
}
