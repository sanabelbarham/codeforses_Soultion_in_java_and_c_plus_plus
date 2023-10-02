#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int t,n,k;
  cin>>t;
  while(t--){
      cin>>n>>k;
      int sum=0,sum1=0;
      int a[n],b[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
          sum+=a[i];

      }
 int j=n-1;
      for(int i=0;i<n;i++){
      cin>>b[i];
      }

      sort(a,a+n);
      sort(b,b+n);
      for(int i=0;i<n;i++){
          if(a[i]<b[j]&&i<k)
          sum1+=b[j--];
          else
          {
              sum1+=a[i];
          }

      }
      cout<<sum1<<endl;

  }

    return 0;
}
