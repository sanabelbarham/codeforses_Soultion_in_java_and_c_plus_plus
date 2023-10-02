

#include <iostream>

using namespace std;

int main()
{
string s;
int n,d=0,a=0;
cin>>n>>s;
for(int i=0;i<s.length();i++)
{
    if(s[i]=='D')
    d++;
    else
    a++;

}
  if(a>d)
    cout<<"Anton";
      if(d>a)
     cout<<"Danik";
     if(a==d)
     cout<<"Friendship";
    return 0;
}
