#include <iostream>

using namespace std;

int main()
{
int t,n;
cin>>t;
while(t--){
    cin>>n;

    int arr[n];
    cin>>arr[0];
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max)
        max=arr[i];
        else if(arr[i]<min)
        min=arr[i];
    }
    cout<<max-min<<endl;
}

    return 0;
}

