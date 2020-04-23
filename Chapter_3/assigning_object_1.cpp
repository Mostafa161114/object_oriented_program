#include<iostream>

using namespace std;

class myclass
{
    int a, b;
    public:
    void set(int x, int y)
    {
        a=x;
        b=y;
    }

    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
  myclass ob1, ob2;
  ob1.set(10,4);
  ob2=ob1;
  ob1.show();
  ob2.show();
  ob2.set(22,8);

  ob1.show();
  ob2.show();
  return 0;
}
