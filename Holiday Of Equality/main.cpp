

#include <iostream>

using namespace std;

int main()
{
  int n,c=0;
  cin>>n;
  int arr[n];
  cin>>arr[0];
  int maxe=arr[0];
  for(int i=1;i<n;i++){
 cin>>arr[i];
 if(arr[i]>maxe)
 maxe=arr[i];

  }
  for(int i=0;i<n;i++)
  {

    c+=(maxe-arr[i]);
  }
  cout<<c<<endl;
    return 0;
}
