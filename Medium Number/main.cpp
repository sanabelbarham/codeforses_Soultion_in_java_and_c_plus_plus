
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int arr[3];
int maxe,mine;
int t;
cin>>t;
while(t--){
cin>>arr[0]>>arr[1];
maxe=max(arr[0],arr[1]);
mine=min(arr[0],arr[1]);
cin>>arr[2];
maxe=max(maxe,arr[2]);
mine=min(mine,arr[2]);

for(int i=0;i<3;i++){
    if(arr[i]>mine&&arr[i]<maxe){
    cout<<arr[i]<<endl;
    break;
    }
}
}


    return 0;
}
