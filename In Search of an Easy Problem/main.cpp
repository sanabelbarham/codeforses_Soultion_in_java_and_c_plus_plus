
#include <iostream>

using namespace std;

int main()
{
  int n,k;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>k;
      if(k==1)
      {
          cout<<"HARD";
          return 0;
      }

  }
  cout<<"EASY";

    return 0;
}
