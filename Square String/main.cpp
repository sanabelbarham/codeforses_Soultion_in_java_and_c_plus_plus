#include <iostream>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
      int c=0;
      string s;
      cin>>s;
      if(s.size()%2!=0)
      cout<<"NO"<<endl;
      else
      {
          int first=(s.size()/2)-1;
          int last=s.size()-1;
          while(last>= (s.size()/2)){
              if(s[last]==s[first])
              {
                  last--;
                  first--;
                  c+=2;
              }
              else{
                  cout<<"no"<<endl;
                   break;
              }

          }
          if(c==s.size())
          cout<<"YES"<<endl;

      }


  }

    return 0;
}
