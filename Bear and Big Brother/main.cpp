
#include <iostream>

using namespace std;

int main()
{
    int a,b,p=0;
    cin>>a>>b;
    while(b>a||a==b)
    {
        b*=2;
        a*=3;
        p++;

    }
cout<<p;
    return 0;
}
