
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int t,n;
  cin>>t;
  while(t--){
      cin>>n;
      int arr[n];

      for(int i=0;i<n;i++)
          cin>>arr[i];

          sort(arr,arr+n);
          int j =1;
          int mine=abs( arr[0]-arr[1] );

          while(j<n-1){
             int sub=abs( arr[j]-arr[++j]);
             if(sub<mine)
             mine=sub;

          }
          cout<<mine<<endl;
}
 return 0;
}
