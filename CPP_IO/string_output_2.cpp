#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char str[20] = "Programming";
    int len, i;
    len=strlen(str);
    for(i=1;i<=len;i++)
    {
        cout.write(str,i);
        cout<<endl;
    }
    for(i=len-1;i>=1;i--)
    {
        cout.write(str,i);
        cout<<endl;
    }
    return 0;
}
