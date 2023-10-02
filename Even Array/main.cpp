#include <iostream>

using namespace std;

int main()
{
int t,n;
cin>>t;
while(t--){
    int even=0;
    int odd=0;
    cin>>n;
    int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    if((i%2)!=(arr[i]%2))
    {
        if(i%2==0)
        even++;
        else
        odd++;
    }
}
if(even==odd)
cout<<even<<endl;
else
cout<<-1<<endl;


}

    return 0;
}
