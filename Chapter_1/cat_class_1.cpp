#include<iostream>

using namespace std;

class cat
{
    public:
    int age, weight;
    void show_info()
    {
        cout<<"weight is : "<<weight<<endl<<"age is : "<<age<<"\n";
    }
};

int main()
{
    cat cob1, cob2;
    cob1.age=3;
    cob1.weight=5;
    cob1.show_info();

    cob2.age=4;
    cob2.weight=6;
    cob2.show_info();

    return 0;
}
