#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //cout.setf(ios::showpoint);

    cout<<setw(5)<<"n"<<setw(18)<<"inverse of n"
        <<setw(18)<<"sum of terminals"<<endl;

    double term, sum=0;
    for(int n=1;n<=10;n++)
    {
        term=1.0/(float)n;
        sum=sum+term;
        cout<<setw(5)<<n
        <<setw(18)<<setprecision(4)<<scientific<<term
        <<resetiosflags(ios::scientific)
        <<setw(18)<<fixed<<sum<<
        resetiosflags(ios::fixed)<<endl;
    }
    return 0;
}
