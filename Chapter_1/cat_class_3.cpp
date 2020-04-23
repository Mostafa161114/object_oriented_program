#include<iostream>

using namespace std;

class cat
{

    int age, weight;
    public:
    void input_info()
    {
        cout<<"input weight : ";
        cin>>weight;
        cout<<"input age : ";
        cin>>age;
    }
    void show_info()
    {
        cout<<"weight is : "<<weight<<"\n";
        cout<<"age is : "<<age<<"\n\n";
    }
};

int main()
{
    cat cob1, cob2;
    cob1.input_info();
    cob1.show_info();

    cob2.input_info();
    cob2.show_info();

    return 0;
}
