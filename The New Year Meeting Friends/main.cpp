
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
int a,b,c,count=0;
int target=0;
cin>>a>>b;
int minimam=min(a,b);
int maxemam=max(a,b);
cin>>c;
minimam=min(minimam,c);
maxemam=max(maxemam,c);
if(a>minimam&&a<maxemam)
 target=a;
else if(b>minimam&&b<maxemam)
 target=b;
else if(c>minimam&&c<maxemam)
 target=c;
count+=(target-minimam);
count+=(maxemam-target);
cout<<count<<endl;

    return 0;
}
