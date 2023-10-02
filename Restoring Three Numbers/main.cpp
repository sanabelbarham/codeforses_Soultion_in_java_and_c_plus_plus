

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
int a,b,c,d, maxemam=0;
cin>>a>>b;
 maxemam=max(a,b);
cin>>c;
maxemam=max(maxemam,c);
cin>>d;
maxemam=max(maxemam,d);
    if((maxemam-a)!=0)
    cout<<(maxemam-a)<<" ";
if((maxemam-b)!=0)
cout<<(maxemam-b)<<" ";
    if((maxemam-c)!=0)
    cout<<(maxemam-c)<<" ";
if((maxemam-d)!=0)
cout<<(maxemam-d)<<" ";

    return 0;
}
