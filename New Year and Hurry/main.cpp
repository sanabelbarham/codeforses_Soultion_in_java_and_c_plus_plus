#include <iostream>
using namespace std;

int main() {
int n,min,c=0;
cin>>n>>min;
int total=240-min;
for(int i=1;i<=n;i++)
{
    if(total>=(i*5))
    {
    total-=i*5;
    c++;
    }

}
cout<<c<<endl;
    return 0;
}
