

#include <iostream>

using namespace std;

int main()
{
int p ,h,num;
cin>>p>>h>>num;
int cost=0;
for(int i=1;i<=num;i++)
{
    cost+=(i*p);
}
int borow=abs(cost-h);
if(h>=cost)
cout<<0;
else
cout<<borow;
    return 0;
}
