#include<iostream>
#include<ctime>

using namespace std;

class timer
{
    clock_t start, end;
    public:
    timer();
    ~timer();
};

timer :: timer()
{
    start = clock();
}

timer :: ~timer()
{
    end = clock();
    cout<<"time ellapsed : "<<(end-start)/CLOCKS_PER_SEC<<"\n";
}

int main()
{
    timer ob;
    char x;
    cout<<"input a character : ";
    cin>>x;
    return 0;
}
