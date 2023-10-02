

#include <iostream>

using namespace std;

int main()
{
int x,c=0;
cin>>x>>c;
while(c!=0)
{
    c--;
      if(x%10 ==0)
   x=x/10;
   else
   x=x-1;
}
cout<<x;

    return 0;
}
