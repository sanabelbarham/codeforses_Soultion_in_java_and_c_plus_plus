
#include <iostream>

using namespace std;

int main()
{
int t,n,a,b,c;
cin>>t;
while(t--){
  cin>>a>>b>>c;
  if(a+b==c)
  cout<<'+'<<endl;
  else if((a-b)==c)
  cout<<'-'<<endl;
}

    return 0;
}
