#include <iostream>
#include <cstring>
using namespace std;

int main()
{
int t;
cin>>t;
string s;

while(t--){
    int j=0;
    cin>>s;
    char answer[ (s.size()/2)+1 ];
    for(int i=0;i<s.size();i+=2)
    {
       answer[j++]=s[i];

    }
 answer[j++]=s[s.size()-1];
 for(int i=0;i<sizeof(answer);i++)
 cout<<answer[i];
 cout<<endl;

}



    return 0;
}
