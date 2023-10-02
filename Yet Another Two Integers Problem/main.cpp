

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
int t,a,b,c=0,target;
cin>>t;
while(t--)

{
    c=0;
    cin>>a>>b;

       target=abs(a-b);
       c=target/10;
       if(target%10!=0)
       c++;
        cout<<c<<endl;

}

    return 0;
}
