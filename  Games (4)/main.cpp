
#include <iostream>
#include <vector>

#include <algorithm>
using namespace std;

int main()
{
int t,a,b,c,d;
cin>>t;
while(t--){
    vector<int>vec;
   int arr[4];
   cin>>arr[0]>>arr[1];
   int maxe=max(arr[0],arr[1]);
   cin>>arr[2];
   maxe=max(maxe,arr[2]);
   cin>>arr[3];
   maxe=max(maxe,arr[3]);
   for(int i=0;i<4;i++){
       if(arr[i]!=maxe)
       vec.push_back(arr[i]);
   }
   int second=max(vec[0],vec[1]);
   second=max(second,vec[2]);
int first=0;
int last=3;
int testone=max(arr[0],arr[1]);
int testtwo=max(arr[2],arr[3]);
if(testone!=second &&testone!=maxe)
{
    cout<<"NO"<<endl;

}
else if( testtwo!=second && testtwo!=maxe){
    cout<<"NO"<<endl;

}
else{
    cout<<"YES"<<endl;
}




}

    return 0;
}
