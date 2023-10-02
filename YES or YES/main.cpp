
#include <iostream>
#include <cstring>
#include <cctype> // for toupper

using namespace std;

int main()
{
    int t;
    string s,k="YES";
    cin>>t;


while(t--)
{
cin>>s;
for(int i=0;i<s.size();i++)
s[i]=toupper(s[i]);
if(k==s)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}

    return 0;
}
