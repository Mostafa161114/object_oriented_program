#include<iostream>

using namespace std;

class cat
{

    int age, weight;
    void show_info()
    {
        cout<<"weight is : "<<weight<<"\n";
        cout<<"age is : "<<age<<"\n";
    }
};

int main()
{
    cat cob1, cob2;
    cob1.age=3;
    cob1.weight=5;
    cob1.info();

    cob2.age=4;
    cob2.weight=6;
    cob2.info();

    return 0;
}
